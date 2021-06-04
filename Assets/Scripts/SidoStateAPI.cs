using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;
using System; // 2.1 네임스페이스 Serializable
using System.IO; // 2.1 네임스페이스 File
using System.Xml;


public struct LoadedData_Sido
{
    
    public String GUBUN;//시도명
    public int INC_DEC;//전일대비 증감수
    public String STD_DAY;//구분일시
    public int DEATH_CNT;//사망자수
    public int DEF_CNT;//확진자수
    public int OVER_FLOW_CNT;//해외유입 수
    public int LOCAL_OCC_CNT;//지역발생 수

}



public class SidoStateAPI : MonoBehaviour
{
    string getResult;
    public Text StateText;
    public Text GuidTxt;
    public Text TimeText;
    public Text TotalText;
    XmlDocument xmlData;
    LoadedData_Sido[,] d = new LoadedData_Sido[7, 18];
    public int[] loadingDate = new int[7];//날짜 ****@@!!형식




    bool isOnLoading = true;

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
            StartCoroutine(LoadData(loadingDate));
        }
        


    }

    private void Update()
    {
        showState();
        TimeText.GetComponent<Text>().text = "기준 일시 : " + d[0, 0].STD_DAY;
        if (d[0,17].INC_DEC > 0)
        {
            TotalText.GetComponent<Text>().text = "합계 : <color=red>▲ " + d[0, 17].INC_DEC + "</color>";
        }
        else
        {
            TotalText.GetComponent<Text>().text = "합계 : " + d[0, 17].INC_DEC;
        }
        
    }

    IEnumerator LoadData(int[] loadingDate) //json 문자열 받아오기
    {
        for (int i = 0; i < 7; i++)
        {
            string GetDataUrl = "http://openapi.data.go.kr/openapi/service/rest/Covid19/getCovid19SidoInfStateJson?startCreateDt=" + loadingDate[i] + "&endCreateDt=" + loadingDate[i] + "&serviceKey=MwUP%2BblvFPOSrJLoWUyH7o2w0o01f8KWn4sMeOl4hvG%2BM%2FZ00VD3X6QnbRdY3lfjz3EqrlnPuAybfF0qTmrv1g%3D%3D&pageNo=1&_returnType=xml";
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
                        Debug.Log(d[i, 17].GUBUN + ", " + d[i, 17].INC_DEC + ", " + d[i, 17].STD_DAY);
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
        foreach(XmlNode node in nodes)
        {
            
            if (i != 0)
            {
               d[x,j].GUBUN = node.InnerText;
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
                d[x,j].INC_DEC = Int32.Parse(node.InnerText);
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
                d[x,j].STD_DAY = node.InnerText;
                
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
                d[x, j].DEATH_CNT = Int32.Parse(node.InnerText);
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
                d[x, j].DEF_CNT = Int32.Parse(node.InnerText);
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
                d[x, j].OVER_FLOW_CNT = Int32.Parse(node.InnerText);
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
                d[x, j].LOCAL_OCC_CNT = Int32.Parse(node.InnerText);
                j++;
            }


            i++;
        }

    }

    public void showState()
    {
        if (Input.GetMouseButton(0))
        {
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            RaycastHit2D hit = Physics2D.GetRayIntersection(ray, Mathf.Infinity);

            if(hit.collider != null)
            {
                GuidTxt.GetComponent<Text>().text = "";
                
                if (hit.collider.name == d[0,0].GUBUN)
                {
                    
                    if (d[0,0].INC_DEC > 0)
                    {
                        StateText.GetComponent<Text>().text = d[0, 0].GUBUN+ " <color=red>▲ "+ d[0, 0].INC_DEC+"</color>";
                    }
                    else if(d[0, 0].INC_DEC == 0)
                    {
                        StateText.GetComponent<Text>().text = d[0, 0].GUBUN + " 〓 "+ d[0, 0].INC_DEC;
                    }
                    
                }
                if (hit.collider.name == d[0, 1].GUBUN)
                {

                    if (d[0, 1].INC_DEC > 0)
                    {
                        StateText.GetComponent<Text>().text = d[0, 1].GUBUN + " <color=red>▲ " + d[0, 1].INC_DEC + "</color>";
                    }
                    else if (d[0, 1].INC_DEC == 0)
                    {
                        StateText.GetComponent<Text>().text = d[0, 1].GUBUN + " 〓 " + d[0, 1].INC_DEC;
                    }

                }
                if (hit.collider.name == d[0, 2].GUBUN)
                {

                    if (d[0, 2].INC_DEC > 0)
                    {
                        StateText.GetComponent<Text>().text = d[0, 2].GUBUN + " <color=red>▲ " + d[0, 2].INC_DEC + "</color>";
                    }
                    else if (d[0, 2].INC_DEC == 0)
                    {
                        StateText.GetComponent<Text>().text = d[0, 2].GUBUN + " 〓 " + d[0, 2].INC_DEC;
                    }

                }
                if (hit.collider.name == d[0, 3].GUBUN)
                {

                    if (d[0, 3].INC_DEC > 0)
                    {
                        StateText.GetComponent<Text>().text = d[0, 3].GUBUN + " <color=red>▲ " + d[0, 3].INC_DEC + "</color>";
                    }
                    else if (d[0, 3].INC_DEC == 0)
                    {
                        StateText.GetComponent<Text>().text = d[0, 3].GUBUN + " 〓 " + d[0, 3].INC_DEC;
                    }

                }
                if (hit.collider.name == d[0, 4].GUBUN)
                {

                    if (d[0, 4].INC_DEC > 0)
                    {
                        StateText.GetComponent<Text>().text = d[0, 4].GUBUN + " <color=red>▲ " + d[0, 4].INC_DEC + "</color>";
                    }
                    else if (d[0, 4].INC_DEC == 0)
                    {
                        StateText.GetComponent<Text>().text = d[0, 4].GUBUN + " 〓 " + d[0, 4].INC_DEC;
                    }

                }
                if (hit.collider.name == d[0, 5].GUBUN)
                {

                    if (d[0, 5].INC_DEC > 0)
                    {
                        StateText.GetComponent<Text>().text = d[0, 5].GUBUN + " <color=red>▲ " + d[0, 5].INC_DEC + "</color>";
                    }
                    else if (d[0, 5].INC_DEC == 0)
                    {
                        StateText.GetComponent<Text>().text = d[0, 5].GUBUN + " 〓 " + d[0, 5].INC_DEC;
                    }

                }
                if (hit.collider.name == d[0, 6].GUBUN)
                {

                    if (d[0, 6].INC_DEC > 0)
                    {
                        StateText.GetComponent<Text>().text = d[0, 6].GUBUN + " <color=red>▲ " + d[0, 6].INC_DEC + "</color>";
                    }
                    else if (d[0, 6].INC_DEC == 0)
                    {
                        StateText.GetComponent<Text>().text = d[0, 6].GUBUN + " 〓 " + d[0, 6].INC_DEC;
                    }

                }
                if (hit.collider.name == d[0, 7].GUBUN)
                {

                    if (d[0, 7].INC_DEC > 0)
                    {
                        StateText.GetComponent<Text>().text = d[0, 7].GUBUN + " <color=red>▲ " + d[0, 7].INC_DEC + "</color>";
                    }
                    else if (d[0, 7].INC_DEC == 0)
                    {
                        StateText.GetComponent<Text>().text = d[0, 7].GUBUN + " 〓 " + d[0, 7].INC_DEC;
                    }

                }
                if (hit.collider.name == d[0, 8].GUBUN)
                {

                    if (d[0, 8].INC_DEC > 0)
                    {
                        StateText.GetComponent<Text>().text = d[0, 8].GUBUN + " <color=red>▲ " + d[0, 8].INC_DEC + "</color>";
                    }
                    else if (d[0, 8].INC_DEC == 0)
                    {
                        StateText.GetComponent<Text>().text = d[0, 8].GUBUN + " 〓 " + d[0, 8].INC_DEC;
                    }

                }
                if (hit.collider.name == d[0, 9].GUBUN)
                {

                    if (d[0, 9].INC_DEC > 0)
                    {
                        StateText.GetComponent<Text>().text = d[0, 9].GUBUN + " <color=red>▲ " + d[0, 9].INC_DEC + "</color>";
                    }
                    else if (d[0, 9].INC_DEC == 0)
                    {
                        StateText.GetComponent<Text>().text = d[0, 9].GUBUN + " 〓 " + d[0, 9].INC_DEC;
                    }

                }
                if (hit.collider.name == d[0, 10].GUBUN)
                {

                    if (d[0, 10].INC_DEC > 0)
                    {
                        StateText.GetComponent<Text>().text = d[0, 10].GUBUN + " <color=red>▲ " + d[0, 10].INC_DEC + "</color>";
                    }
                    else if (d[0, 10].INC_DEC == 0)
                    {
                        StateText.GetComponent<Text>().text = d[0, 10].GUBUN + " 〓 " + d[0, 10].INC_DEC;
                    }

                }
                if (hit.collider.name == d[0, 11].GUBUN)
                {

                    if (d[0, 11].INC_DEC > 0)
                    {
                        StateText.GetComponent<Text>().text = d[0, 11].GUBUN + " <color=red>▲ " + d[0, 11].INC_DEC + "</color>";
                    }
                    else if (d[0, 11].INC_DEC == 0)
                    {
                        StateText.GetComponent<Text>().text = d[0, 11].GUBUN + " 〓 " + d[0, 11].INC_DEC;
                    }

                }
                if (hit.collider.name == d[0, 12].GUBUN)
                {

                    if (d[0, 12].INC_DEC > 0)
                    {
                        StateText.GetComponent<Text>().text = d[0, 12].GUBUN + " <color=red>▲ " + d[0, 12].INC_DEC + "</color>";
                    }
                    else if (d[0, 12].INC_DEC == 0)
                    {
                        StateText.GetComponent<Text>().text = d[0, 12].GUBUN + " 〓 " + d[0, 12].INC_DEC;
                    }

                }
                if (hit.collider.name == d[0, 13].GUBUN)
                {

                    if (d[0, 13].INC_DEC > 0)
                    {
                        StateText.GetComponent<Text>().text = d[0, 13].GUBUN + " <color=red>▲ " + d[0, 13].INC_DEC + "</color>";
                    }
                    else if (d[0, 13].INC_DEC == 0)
                    {
                        StateText.GetComponent<Text>().text = d[0, 13].GUBUN + " 〓 " + d[0, 13].INC_DEC;
                    }

                }
                if (hit.collider.name == d[0, 14].GUBUN)
                {

                    if (d[0, 14].INC_DEC > 0)
                    {
                        StateText.GetComponent<Text>().text = d[0, 14].GUBUN + " <color=red>▲ " + d[0, 14].INC_DEC + "</color>";
                    }
                    else if (d[0, 14].INC_DEC == 0)
                    {
                        StateText.GetComponent<Text>().text = d[0, 14].GUBUN + " 〓 " + d[0, 14].INC_DEC;
                    }

                }
                if (hit.collider.name == d[0, 15].GUBUN)
                {

                    if (d[0, 15].INC_DEC > 0)
                    {
                        StateText.GetComponent<Text>().text = d[0, 15].GUBUN + " <color=red>▲ " + d[0, 15].INC_DEC + "</color>";
                    }
                    else if (d[0, 15].INC_DEC == 0)
                    {
                        StateText.GetComponent<Text>().text = d[0, 15].GUBUN + " 〓 " + d[0, 15].INC_DEC;
                    }

                }
                if (hit.collider.name == d[0, 16].GUBUN)
                {

                    if (d[0, 16].INC_DEC > 0)
                    {
                        StateText.GetComponent<Text>().text = d[0, 16].GUBUN + " <color=red>▲ " + d[0, 16].INC_DEC + "</color>";
                    }
                    else if (d[0, 16].INC_DEC == 0)
                    {
                        StateText.GetComponent<Text>().text = d[0, 16].GUBUN + " 〓 " + d[0, 16].INC_DEC;
                    }

                }
                
            }



        }

        
    }

}