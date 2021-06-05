using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Xml;
using System;
using UnityEngine.Networking;

[System.Serializable]
public struct Loaded_Sido
{

    public String GUBUN;//시도명
    public int INC_DEC;//전일대비 증감수
    public String STD_DAY;//구분일시
    public int DEATH_CNT;//사망자수
    public int DEF_CNT;//확진자수
    public int OVER_FLOW_CNT;//해외유입 수
    public int LOCAL_OCC_CNT;//지역발생 수

}


public class LoadAPI : MonoBehaviour
{
    public Loaded_Sido[,] T_sidoData = new Loaded_Sido[7, 18];
    public apiData T_ImmuzData = new apiData();
    public LoadeddData_Infection T_InfectData = new LoadeddData_Infection();

    // Start is called before the first frame update
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
                

            }
            else if (i == 0)
            {
                loadingDate[i] = Int32.Parse(DateTime.Now.ToString("yyyyMMdd"));
                
            }
            StartCoroutine(LoadDataSido(loadingDate));
        }
       
        StartCoroutine(LoadDataImmu());
        StartCoroutine(LoadDataInfect());


    }

    // Update is called once per frame
    void Update()
    {
        
    }

    IEnumerator LoadDataSido(int[] loadingDate) //json 문자열 받아오기
    {
        for (int i = 0; i < 7; i++)
        {
            string GetDataUrl = "http://openapi.data.go.kr/openapi/service/rest/Covid19/getCovid19SidoInfStateJson?startCreateDt=" + loadingDate[i] + "&endCreateDt=" + loadingDate[i] + "&serviceKey=yjKGnnTiyZAh269QOCnzr3sbYTubvBkbVCsI4G%2F0dsLMFGOJYMrRle795M%2FTeMDBURDYtbb%2FiSUoyxAYaFafOw%3D%3D&pageNo=1&_returnType=xml";
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
                        //Debug.Log(T_sidoData[i, 17].GUBUN + ", " + T_sidoData[i, 17].INC_DEC + ", " + T_sidoData[i, 17].STD_DAY);
                    }
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
                T_sidoData[x, j].GUBUN = node.InnerText;
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
                T_sidoData[x, j].INC_DEC = Int32.Parse(node.InnerText);
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
                T_sidoData[x, j].STD_DAY = node.InnerText;

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
                T_sidoData[x, j].DEATH_CNT = Int32.Parse(node.InnerText);
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
                T_sidoData[x, j].DEF_CNT = Int32.Parse(node.InnerText);
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
                T_sidoData[x, j].OVER_FLOW_CNT = Int32.Parse(node.InnerText);
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
                T_sidoData[x, j].LOCAL_OCC_CNT = Int32.Parse(node.InnerText);
                j++;
            }


            i++;
        }

    }

    IEnumerator LoadDataImmu() //json 문자열 받아오기
    {
        string GetDataUrl = "https://api.odcloud.kr/api/15077756/v1/vaccine-stat?page=1&perPage=18&cond%5BbaseDate%3A%3AGTE%5D=2021-06-03&serviceKey=3S0m0YB0Gt%2BfX9GnAyZLZ9IZDwnhYKJkK2mBw8WNIJoUf1SGiQSKVOzb3wyH8sYlcbLmrk4rbPbpkAleRRQ8jQ%3D%3D";
        //전국+17개 시도
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



                    ProcessPlayer(getResult);
                }
            }
        }
    }


    private void ProcessPlayer(string getResult)
    {
        T_ImmuzData = JsonUtility.FromJson<apiData>(getResult);


    }

    IEnumerator LoadDataInfect() //json 문자열 받아오기
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
            T_InfectData.DECIDE_CNT = Int32.Parse(node.InnerText);
        }
        nodes = xmlData.DocumentElement.SelectNodes("//item/examCnt");

        foreach (XmlNode node in nodes)
        {
            T_InfectData.EXAM_CNT = Int32.Parse(node.InnerText);
        }
        nodes = xmlData.DocumentElement.SelectNodes("//item/clearCnt");

        foreach (XmlNode node in nodes)
        {
            T_InfectData.CLEAR_CNT = Int32.Parse(node.InnerText);
        }
        nodes = xmlData.DocumentElement.SelectNodes("//item/deathCnt");

        foreach (XmlNode node in nodes)
        {
            T_InfectData.DEATH_CNT = Int32.Parse(node.InnerText);
        }
        nodes = xmlData.DocumentElement.SelectNodes("//item/stateDt");
        foreach (XmlNode node in nodes)
        {
            T_InfectData.STATE_DT = Int32.Parse(node.InnerText);

        }

    }
}
