using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using System; // 2.1 ���ӽ����̽� Serializable
using System.IO; // 2.1 ���ӽ����̽� File
using System.Xml;


public struct LoadedData
{
    
    public String GUBUN;//�õ���
    public String INC_DEC;//���ϴ�� ������
    public String STD_DAY;//�����Ͻ�


}

public class SidoStateAPI : MonoBehaviour
{
    string getResult;
    XmlDocument xmlData;


    bool isOnLoading = true;

    void Start()
    {
        StartCoroutine(LoadData());


    }


    IEnumerator LoadData() //json ���ڿ� �޾ƿ���
    {
        string GetDataUrl = "http://openapi.data.go.kr/openapi/service/rest/Covid19/getCovid19SidoInfStateJson?serviceKey=MwUP%2BblvFPOSrJLoWUyH7o2w0o01f8KWn4sMeOl4hvG%2BM%2FZ00VD3X6QnbRdY3lfjz3EqrlnPuAybfF0qTmrv1g%3D%3D&pageNo=1&_returnType=xml";
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
        LoadedData[] d = new LoadedData[17];
        XmlNodeList nodes = xmlData.DocumentElement.SelectNodes("//item/gubun");
        int i = 0;
        int j = 0;
        foreach(XmlNode node in nodes)
        {
            
            if (i != 0 && i != 18)
            {
               d[j].GUBUN = node.InnerText;
               j++;
            }
           
            
            i++;
        }
        nodes = xmlData.DocumentElement.SelectNodes("//item/incDec");
        i = 0;
        j = 0;
        foreach (XmlNode node in nodes)
        {
            if (i != 0 && i != 18)
            {
                d[j].INC_DEC = node.InnerText;
                j++;
            }
            

            i++;
        }
        nodes = xmlData.DocumentElement.SelectNodes("//item/stdDay");
        i = 0;
        j = 0;
        foreach (XmlNode node in nodes)
        {
            if (i != 0 && i != 18)
            {
                d[j].STD_DAY = node.InnerText;
                Debug.Log(d[j].GUBUN + ", " + d[j].INC_DEC + ", " + d[j].STD_DAY);
                j++;
            }
            


            i++;

        }


    }
}