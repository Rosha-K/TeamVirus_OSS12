using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using System; // 2.1 네임스페이스 Serializable
using System.IO; // 2.1 네임스페이스 File
using System.Xml;

[System.Serializable]
public class LoadeddData_Infection
{

    public int CLEAR_CNT;//격리해제 수
    public int EXAM_CNT;//검사진행 수
    public int DEATH_CNT;//사망자 수
    public int DECIDE_CNT;//확진자 수
    public int STATE_DT;//기준일자

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


    IEnumerator LoadData() //json 문자열 받아오기
    {
        
        string GetDataUrl = "http://openapi.data.go.kr/openapi/service/rest/Covid19/getCovid19InfStateJson?serviceKey=MwUP%2BblvFPOSrJLoWUyH7o2w0o01f8KWn4sMeOl4hvG%2BM%2FZ00VD3X6QnbRdY3lfjz3EqrlnPuAybfF0qTmrv1g%3D%3D&pageNo=1&_returnType=xml";
        using (UnityWebRequest www = UnityWebRequest.Get(GetDataUrl))
        {

            //www.chunkedTransfer = true;
            yield return www.Send();
            if (www.isNetworkError || www.isHttpError) //불러오기 실패 시
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