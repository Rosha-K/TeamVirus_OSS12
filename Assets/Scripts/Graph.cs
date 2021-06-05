using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using System.Xml;
using UnityEngine.Networking;

public struct Loaded_Sido_Graph
{

    public String GUBUN;//시도명
    public int INC_DEC;//전일대비 증감수
    public String STD_DAY;//구분일시
    public int DEATH_CNT;//사망자수
    public int DEF_CNT;//확진자수
    public int OVER_FLOW_CNT;//해외유입 수
    public int LOCAL_OCC_CNT;//지역발생 수

}

public class Graph : MonoBehaviour
{
    public Loaded_Sido_Graph[,] G_sidoData = new Loaded_Sido_Graph[7, 18];
    public GameObject[] bar = new GameObject[7];
    public GameObject[] value = new GameObject[7];
    public GameObject[] date = new GameObject[7];
    public String[] graphDate = new String[7];
    string getResult;

    bool isOnLoading = true;
    XmlDocument xmlData;
    public int[] loadingDate = new int[7];//날짜 ****@@!!형식

    void Start()
    {

        for (int i = 0; i < 7; i++)
        {

            if (i != 0)
            {
                DateTime dt = DateTime.Now.AddDays(-i);
                loadingDate[i] = Int32.Parse(dt.ToString("yyyyMMdd"));
                graphDate[i] = dt.ToString("MM.dd");

            }
            else if (i == 0)
            {
                loadingDate[i] = Int32.Parse(DateTime.Now.ToString("yyyyMMdd"));
                graphDate[i] = DateTime.Now.ToString("MM.dd");
            }


            StartCoroutine(LoadDataSido(loadingDate,i));
            
        }
        

    }
    void Update()
    {

    }
    public void setGraph(int i)
    {
        date[i].GetComponent<Text>().text = graphDate[i];
        bar[i].transform.localScale = new Vector3(bar[i].transform.localScale.x, (G_sidoData[i, 17].INC_DEC) / 4, bar[i].transform.localScale.z);
        value[i].GetComponent<Text>().text = G_sidoData[i, 17].INC_DEC.ToString();
        value[i].transform.position = new Vector3(value[i].transform.position.x, value[i].transform.position.y+ (G_sidoData[i, 17].INC_DEC), value[i].transform.position.z);


    }
    IEnumerator LoadDataSido(int[] loadingDate,int i) //json 문자열 받아오기
    {
        string GetDataUrl = "http://openapi.data.go.kr/openapi/service/rest/Covid19/getCovid19SidoInfStateJson?startCreateDt=" + loadingDate[i] + "&endCreateDt=" + loadingDate[i] + "&serviceKey=3S0m0YB0Gt%2BfX9GnAyZLZ9IZDwnhYKJkK2mBw8WNIJoUf1SGiQSKVOzb3wyH8sYlcbLmrk4rbPbpkAleRRQ8jQ%3D%3D&pageNo=1&_returnType=xml";
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
                    ProcessPlayer(xmlData, i);
                    setGraph(i);
                    //Debug.Log(G_sidoData[i, 17].GUBUN + ", " + G_sidoData[i, 17].INC_DEC + ", " + G_sidoData[i, 17].STD_DAY);
                }
            }
        }
    }

    public void ProcessPlayer(XmlDocument xmlData, int x)
    {

        XmlNodeList nodes = xmlData.DocumentElement.SelectNodes("//item/gubun");
        int i = 0;
        int j = 0;
        foreach (XmlNode node in nodes)
        {

            if (i != 0)
            {
                G_sidoData[x, j].GUBUN = node.InnerText;
                j++;
            }


            i++;
        }
        nodes = xmlData.DocumentElement.SelectNodes("//item/incDec");
        i = 0;
        j = 0;
        foreach (XmlNode node in nodes)
        {
            if (i != 0)
            {
                G_sidoData[x, j].INC_DEC = Int32.Parse(node.InnerText);
                j++;
            }


            i++;
        }
        nodes = xmlData.DocumentElement.SelectNodes("//item/stdDay");
        i = 0;
        j = 0;
        foreach (XmlNode node in nodes)
        {
            if (i != 0)
            {
                G_sidoData[x, j].STD_DAY = node.InnerText;

                j++;
            }



            i++;

        }
        nodes = xmlData.DocumentElement.SelectNodes("//item/deathCnt");
        i = 0;
        j = 0;
        foreach (XmlNode node in nodes)
        {
            if (i != 0)
            {
                G_sidoData[x, j].DEATH_CNT = Int32.Parse(node.InnerText);
                j++;
            }


            i++;
        }
        nodes = xmlData.DocumentElement.SelectNodes("//item/defCnt");
        i = 0;
        j = 0;
        foreach (XmlNode node in nodes)
        {
            if (i != 0)
            {
                G_sidoData[x, j].DEF_CNT = Int32.Parse(node.InnerText);
                j++;
            }


            i++;
        }
        nodes = xmlData.DocumentElement.SelectNodes("//item/overFlowCnt");
        i = 0;
        j = 0;
        foreach (XmlNode node in nodes)
        {
            if (i != 0)
            {
                G_sidoData[x, j].OVER_FLOW_CNT = Int32.Parse(node.InnerText);
                j++;
            }


            i++;
        }
        nodes = xmlData.DocumentElement.SelectNodes("//item/localOccCnt");
        i = 0;
        j = 0;
        foreach (XmlNode node in nodes)
        {
            if (i != 0)
            {
                G_sidoData[x, j].LOCAL_OCC_CNT = Int32.Parse(node.InnerText);
                j++;
            }


            i++;
        }

    }
    
}
