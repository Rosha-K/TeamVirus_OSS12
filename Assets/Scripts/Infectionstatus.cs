using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using System; // 2.1 ���ӽ����̽� Serializable
using System.IO; // 2.1 ���ӽ����̽� File
using System.Xml;

[System.Serializable]
public class LoadeddData_Infection
{

    public int CLEAR_CNT;//�ݸ����� ��
    public int EXAM_CNT;//�˻����� ��
    public int DEATH_CNT;//����� ��
    public int DECIDE_CNT;//Ȯ���� ��
    public int STATE_DT;//��������

}

public class Infectionstatus : MonoBehaviour
{
    string getResult;
    XmlDocument xmlData;
    public LoadeddData_Infection d;
    
    bool isOnLoading = true;

    void Start()
    {
        
        StartCoroutine(LoadData());
        

    }


    IEnumerator LoadData() //json ���ڿ� �޾ƿ���
    {
        
        string GetDataUrl = "http://openapi.data.go.kr/openapi/service/rest/Covid19/getCovid19InfStateJson?serviceKey=MwUP%2BblvFPOSrJLoWUyH7o2w0o01f8KWn4sMeOl4hvG%2BM%2FZ00VD3X6QnbRdY3lfjz3EqrlnPuAybfF0qTmrv1g%3D%3D&pageNo=1&_returnType=xml";
        using (UnityWebRequest www = UnityWebRequest.Get(GetDataUrl))
        {

            //www.chunkedTransfer = true;
            yield return www.Send();
            if (www.isNetworkError || www.isHttpError) //�ҷ����� ���� ��
            {
                Debug.Log(www.error);
            }
            else
            {
                if (www.isDone)
                {
                    isOnLoading = false;



                    getResult =
                        System.Text.Encoding.UTF8.GetString(www.downloadHandler.data);


                    // Debug.Log(getResult);



                    xmlData = new XmlDocument();
                    xmlData.LoadXml(getResult);
                    ProcessPlayer(xmlData);
                }
            }
        }
        
        
    }

    private void ProcessPlayer(XmlDocument xmlData)
    {
        
        XmlNodeList nodes = xmlData.DocumentElement.SelectNodes("//item/decideCnt");
        
        foreach (XmlNode node in nodes)
        {
                d.DECIDE_CNT = Int32.Parse(node.InnerText);
        }
        nodes = xmlData.DocumentElement.SelectNodes("//item/examCnt");
        
        foreach (XmlNode node in nodes)
        {
                d.EXAM_CNT = Int32.Parse(node.InnerText);
        }
        nodes = xmlData.DocumentElement.SelectNodes("//item/clearCnt");

        foreach (XmlNode node in nodes)
        {
                d.CLEAR_CNT = Int32.Parse(node.InnerText);
        }
        nodes = xmlData.DocumentElement.SelectNodes("//item/deathCnt");

        foreach (XmlNode node in nodes)
        {
                d.DEATH_CNT = Int32.Parse(node.InnerText);
        }
        nodes = xmlData.DocumentElement.SelectNodes("//item/stateDt");
        foreach (XmlNode node in nodes)
        {
                d.STATE_DT = Int32.Parse(node.InnerText);
            
        }
        
    }
}