using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Xml;
using System;
using UnityEngine.Networking;

[System.Serializable]
public struct Statistics_Sido
{

    public String GUBUN;//시도명
    public int INC_DEC;//전일대비 증감수
    public String STD_DAY;//구분일시
    public int DEATH_CNT;//사망자수
    public int DEF_CNT;//확진자수
    public int OVER_FLOW_CNT;//해외유입 수
    public int LOCAL_OCC_CNT;//지역발생 수

}

public class CoronaStatistics : MonoBehaviour
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

    public Text jejuDecide;
    public Text jejuDeath;
    public Text gnDecide;
    public Text gnDeath;
    public Text gbDecide;
    public Text gbDeath;
    public Text jnDecide;
    public Text jnDeath;
    public Text jbDecide;
    public Text jbDeath;
    public Text cnDecide;
    public Text cnDeath;
    public Text cbDecide;
    public Text cbDeath;
    public Text gwDecide;
    public Text gwDeath;
    public Text ggDecide;
    public Text ggDeath;
    public Text sjDecide;
    public Text sjDeath;
    public Text usDecide;
    public Text usDeath;
    public Text djDecide;
    public Text djDeath;
    public Text gjDecide;
    public Text gjDeath;
    public Text icDecide;
    public Text icDeath;
    public Text dgDecide;
    public Text dgDeath;
    public Text bsDecide;
    public Text bsDeath;
    public Text soDecide;
    public Text soDeath;




    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(LoadDatas());
        StartCoroutine(LoadData());
        
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
        temp = string.Format("{0:#,0}", S_sidoData[1].DEF_CNT);
        jejuDecide.GetComponent<Text>().text = temp;
        temp = string.Format("{0:#,0}", S_sidoData[1].DEATH_CNT);
        jejuDeath.GetComponent<Text>().text = temp;
        temp = string.Format("{0:#,0}", S_sidoData[2].DEF_CNT);
        gnDecide.GetComponent<Text>().text = temp;
        temp = string.Format("{0:#,0}", S_sidoData[2].DEATH_CNT);
        gnDeath.GetComponent<Text>().text = temp;
        temp = string.Format("{0:#,0}", S_sidoData[3].DEF_CNT);
        gbDecide.GetComponent<Text>().text = temp;
        temp = string.Format("{0:#,0}", S_sidoData[3].DEATH_CNT);
        gbDeath.GetComponent<Text>().text = temp;
        temp = string.Format("{0:#,0}", S_sidoData[4].DEF_CNT);
        jnDecide.GetComponent<Text>().text = temp;
        temp = string.Format("{0:#,0}", S_sidoData[4].DEATH_CNT);
        jnDeath.GetComponent<Text>().text = temp;
        temp = string.Format("{0:#,0}", S_sidoData[5].DEF_CNT);
        jbDecide.GetComponent<Text>().text = temp;
        temp = string.Format("{0:#,0}", S_sidoData[5].DEATH_CNT);
        jbDeath.GetComponent<Text>().text = temp;
        temp = string.Format("{0:#,0}", S_sidoData[6].DEF_CNT);
        cnDecide.GetComponent<Text>().text = temp;
        temp = string.Format("{0:#,0}", S_sidoData[6].DEATH_CNT);
        cnDeath.GetComponent<Text>().text = temp;
        temp = string.Format("{0:#,0}", S_sidoData[7].DEF_CNT);
        cbDecide.GetComponent<Text>().text = temp;
        temp = string.Format("{0:#,0}", S_sidoData[7].DEATH_CNT);
        cbDeath.GetComponent<Text>().text = temp;
        temp = string.Format("{0:#,0}", S_sidoData[8].DEF_CNT);
        gwDecide.GetComponent<Text>().text = temp;
        temp = string.Format("{0:#,0}", S_sidoData[8].DEATH_CNT);
        gwDeath.GetComponent<Text>().text = temp;
        temp = string.Format("{0:#,0}", S_sidoData[9].DEF_CNT);
        ggDecide.GetComponent<Text>().text = temp;
        temp = string.Format("{0:#,0}", S_sidoData[9].DEATH_CNT);
        ggDeath.GetComponent<Text>().text = temp;
        temp = string.Format("{0:#,0}", S_sidoData[10].DEF_CNT);
        sjDecide.GetComponent<Text>().text = temp;
        temp = string.Format("{0:#,0}", S_sidoData[10].DEATH_CNT);
        sjDeath.GetComponent<Text>().text = temp;
        temp = string.Format("{0:#,0}", S_sidoData[11].DEF_CNT);
        usDecide.GetComponent<Text>().text = temp;
        temp = string.Format("{0:#,0}", S_sidoData[11].DEATH_CNT);
        usDeath.GetComponent<Text>().text = temp;
        temp = string.Format("{0:#,0}", S_sidoData[12].DEF_CNT);
        djDecide.GetComponent<Text>().text = temp;
        temp = string.Format("{0:#,0}", S_sidoData[12].DEATH_CNT);
        djDeath.GetComponent<Text>().text = temp;
        temp = string.Format("{0:#,0}", S_sidoData[13].DEF_CNT);
        gjDecide.GetComponent<Text>().text = temp;
        temp = string.Format("{0:#,0}", S_sidoData[13].DEATH_CNT);
        gjDeath.GetComponent<Text>().text = temp;
        temp = string.Format("{0:#,0}", S_sidoData[14].DEF_CNT);
        icDecide.GetComponent<Text>().text = temp;
        temp = string.Format("{0:#,0}", S_sidoData[14].DEATH_CNT);
        icDeath.GetComponent<Text>().text = temp;
        temp = string.Format("{0:#,0}", S_sidoData[15].DEF_CNT);
        dgDecide.GetComponent<Text>().text = temp;
        temp = string.Format("{0:#,0}", S_sidoData[15].DEATH_CNT);
        dgDeath.GetComponent<Text>().text = temp;
        temp = string.Format("{0:#,0}", S_sidoData[16].DEF_CNT);
        bsDecide.GetComponent<Text>().text = temp;
        temp = string.Format("{0:#,0}", S_sidoData[16].DEATH_CNT);
        bsDeath.GetComponent<Text>().text = temp;
        temp = string.Format("{0:#,0}", S_sidoData[17].DEF_CNT);
        soDecide.GetComponent<Text>().text = temp;
        temp = string.Format("{0:#,0}", S_sidoData[17].DEATH_CNT);
        soDeath.GetComponent<Text>().text = temp;


    }


    // Update is called once per frame
    void Update()
    {
        
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
                    bottomStatistics();
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
