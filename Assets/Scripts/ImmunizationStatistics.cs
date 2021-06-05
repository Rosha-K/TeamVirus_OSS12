using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Xml;
using System;
using UnityEngine.Networking;
using System.IO;

[System.Serializable]
public struct Statistics_Sido_Immu
{

    public String GUBUN;//시도명
    public int INC_DEC;//전일대비 증감수
    public String STD_DAY;//구분일시
    public int DEATH_CNT;//사망자수
    public int DEF_CNT;//확진자수
    public int OVER_FLOW_CNT;//해외유입 수
    public int LOCAL_OCC_CNT;//지역발생 수

}
public class ImmunizationStatistics : MonoBehaviour
{
    public Statistics_Sido[] S_sidoData = new Statistics_Sido[19];
    public LoadeddData_Infection S_InfectData = new LoadeddData_Infection();
    
    string getResult;
    bool isOnLoading = true;
    XmlDocument xmlData;
    public Text decideTotal;
    public Text clearTotal;
    public Text deathTotal;
    public Text accExamTotal;
    public Text localDecide;
    public Text overflowDecide;

    

    

    // Start is called before the first frame update
    void Start()
    {
        
        StartCoroutine(LoadData());
        StartCoroutine(LoadDatas());
       
        
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void topStatistics()
    {
        string temp;
        temp = string.Format("{0:#,0}", S_InfectData.DECIDE_CNT);
        decideTotal.GetComponent<Text>().text = temp;
        temp = string.Format("{0:#,0}", S_InfectData.CLEAR_CNT);
        clearTotal.GetComponent<Text>().text = temp;
        temp = string.Format("{0:#,0}", S_InfectData.DEATH_CNT);
        deathTotal.GetComponent<Text>().text = temp;
        temp = string.Format("{0:#,0}", S_InfectData.EXAM_CNT);
        accExamTotal.GetComponent<Text>().text = temp;
        temp = string.Format("{0:#,0}", S_sidoData[18].LOCAL_OCC_CNT);
        localDecide.GetComponent<Text>().text = temp;
        temp = string.Format("{0:#,0}", S_sidoData[18].OVER_FLOW_CNT);
        overflowDecide.GetComponent<Text>().text = temp;
        

        


    }
    public void bottomStatistics()
    {
        string temp;
        //temp = string.Format("{0:#,0}", S_ImmuzData.data[1]);
    }
    IEnumerator LoadDatas() //json 문자열 받아오기
    {

        string GetDataUrl = "http://openapi.data.go.kr/openapi/service/rest/Covid19/getCovid19SidoInfStateJson?serviceKey=3S0m0YB0Gt%2BfX9GnAyZLZ9IZDwnhYKJkK2mBw8WNIJoUf1SGiQSKVOzb3wyH8sYlcbLmrk4rbPbpkAleRRQ8jQ%3D%3D&pageNo=1&_returnType=xml";
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
                    ProcessPlayers(xmlData);
                    topStatistics();
                    //bottomStatistics();
                }
            }
        }

    }
    public void ProcessPlayers(XmlDocument xmlData)
    {

        XmlNodeList nodes = xmlData.DocumentElement.SelectNodes("//item/gubun");
        int i = 0;
        foreach (XmlNode node in nodes)
        {

            S_sidoData[i].GUBUN = node.InnerText;

        }
        nodes = xmlData.DocumentElement.SelectNodes("//item/incDec");
        i = 0;

        foreach (XmlNode node in nodes)
        {
            S_sidoData[i].INC_DEC = Int32.Parse(node.InnerText);


            i++;
        }
        nodes = xmlData.DocumentElement.SelectNodes("//item/stdDay");
        i = 0;

        foreach (XmlNode node in nodes)
        {

            S_sidoData[i].STD_DAY = node.InnerText;


            i++;

        }
        nodes = xmlData.DocumentElement.SelectNodes("//item/deathCnt");
        i = 0;

        foreach (XmlNode node in nodes)
        {

            S_sidoData[i].DEATH_CNT = Int32.Parse(node.InnerText);

            i++;
        }
        nodes = xmlData.DocumentElement.SelectNodes("//item/defCnt");
        i = 0;

        foreach (XmlNode node in nodes)
        {

            S_sidoData[i].DEF_CNT = Int32.Parse(node.InnerText);

            i++;
        }
        nodes = xmlData.DocumentElement.SelectNodes("//item/overFlowCnt");
        i = 0;

        foreach (XmlNode node in nodes)
        {

            S_sidoData[i].OVER_FLOW_CNT = Int32.Parse(node.InnerText);

            i++;
        }
        nodes = xmlData.DocumentElement.SelectNodes("//item/localOccCnt");
        i = 0;

        foreach (XmlNode node in nodes)
        {

            S_sidoData[i].LOCAL_OCC_CNT = Int32.Parse(node.InnerText);

            i++;
        }

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
            S_InfectData.DECIDE_CNT = Int32.Parse(node.InnerText);
        }
        nodes = xmlData.DocumentElement.SelectNodes("//item/examCnt");

        foreach (XmlNode node in nodes)
        {
            S_InfectData.EXAM_CNT = Int32.Parse(node.InnerText);
        }
        nodes = xmlData.DocumentElement.SelectNodes("//item/clearCnt");

        foreach (XmlNode node in nodes)
        {
            S_InfectData.CLEAR_CNT = Int32.Parse(node.InnerText);
        }
        nodes = xmlData.DocumentElement.SelectNodes("//item/deathCnt");

        foreach (XmlNode node in nodes)
        {
            S_InfectData.DEATH_CNT = Int32.Parse(node.InnerText);
        }
        nodes = xmlData.DocumentElement.SelectNodes("//item/stateDt");
        foreach (XmlNode node in nodes)
        {
            S_InfectData.STATE_DT = Int32.Parse(node.InnerText);

        }

    }
    


}
