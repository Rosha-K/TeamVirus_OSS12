using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;
using System; // 2.1 네임스페이스 Serializable
using System.IO; // 2.1 네임스페이스 File
using System.Xml;


public struct LoadedData
{
    
    public String GUBUN;//시도명
    public int INC_DEC;//전일대비 증감수
    public String STD_DAY;//구분일시


}



public class SidoStateAPI : MonoBehaviour
{
    string getResult;
    public Text StateText;
    public Text GuidTxt;
    public Text TimeText;
    XmlDocument xmlData;
    LoadedData[] d = new LoadedData[17];
    
    bool isOnLoading = true;

    void Start()
    {
        StartCoroutine(LoadData());


    }

    private void Update()
    {
        showState();
        TimeText.GetComponent<Text>().text = "기준 일시 : " + d[0].STD_DAY;
    }

    IEnumerator LoadData() //json 문자열 받아오기
    {
        string GetDataUrl = "http://openapi.data.go.kr/openapi/service/rest/Covid19/getCovid19SidoInfStateJson?serviceKey=MwUP%2BblvFPOSrJLoWUyH7o2w0o01f8KWn4sMeOl4hvG%2BM%2FZ00VD3X6QnbRdY3lfjz3EqrlnPuAybfF0qTmrv1g%3D%3D&pageNo=1&_returnType=xml";
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

    public void ProcessPlayer(XmlDocument xmlData)
    {
       
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
                d[j].INC_DEC = Int32.Parse(node.InnerText);
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

    public void showState()
    {
        if (Input.GetMouseButton(0))
        {
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            RaycastHit2D hit = Physics2D.GetRayIntersection(ray, Mathf.Infinity);

            if(hit.collider != null)
            {
                GuidTxt.GetComponent<Text>().text = "";
                
                if (hit.collider.name == d[0].GUBUN)
                {
                    
                    if (d[0].INC_DEC > 0)
                    {
                        StateText.GetComponent<Text>().text = d[0].GUBUN+ " <color=red>▲ "+ d[0].INC_DEC+"</color>";
                    }
                    else if(d[0].INC_DEC == 0)
                    {
                        StateText.GetComponent<Text>().text = d[0].GUBUN + " 〓 "+ d[0].INC_DEC;
                    }
                    
                }
                if (hit.collider.name == d[1].GUBUN)
                {

                    if (d[1].INC_DEC > 0)
                    {
                        StateText.GetComponent<Text>().text = d[1].GUBUN + " <color=red>▲ " + d[1].INC_DEC + "</color>";
                    }
                    else if (d[1].INC_DEC == 0)
                    {
                        StateText.GetComponent<Text>().text = d[1].GUBUN + " 〓 " + d[1].INC_DEC;
                    }

                }
                if (hit.collider.name == d[2].GUBUN)
                {

                    if (d[2].INC_DEC > 0)
                    {
                        StateText.GetComponent<Text>().text = d[2].GUBUN + " <color=red>▲ " + d[2].INC_DEC + "</color>";
                    }
                    else if (d[2].INC_DEC == 0)
                    {
                        StateText.GetComponent<Text>().text = d[2].GUBUN + " 〓 " + d[2].INC_DEC;
                    }

                }
                if (hit.collider.name == d[3].GUBUN)
                {

                    if (d[3].INC_DEC > 0)
                    {
                        StateText.GetComponent<Text>().text = d[3].GUBUN + " <color=red>▲ " + d[3].INC_DEC + "</color>";
                    }
                    else if (d[3].INC_DEC == 0)
                    {
                        StateText.GetComponent<Text>().text = d[3].GUBUN + " 〓 " + d[3].INC_DEC;
                    }

                }
                if (hit.collider.name == d[4].GUBUN)
                {

                    if (d[4].INC_DEC > 0)
                    {
                        StateText.GetComponent<Text>().text = d[4].GUBUN + " <color=red>▲ " + d[4].INC_DEC + "</color>";
                    }
                    else if (d[4].INC_DEC == 0)
                    {
                        StateText.GetComponent<Text>().text = d[4].GUBUN + " 〓 " + d[4].INC_DEC;
                    }

                }
                if (hit.collider.name == d[5].GUBUN)
                {

                    if (d[5].INC_DEC > 0)
                    {
                        StateText.GetComponent<Text>().text = d[5].GUBUN + " <color=red>▲ " + d[5].INC_DEC + "</color>";
                    }
                    else if (d[5].INC_DEC == 0)
                    {
                        StateText.GetComponent<Text>().text = d[5].GUBUN + " 〓 " + d[5].INC_DEC;
                    }

                }
                if (hit.collider.name == d[6].GUBUN)
                {

                    if (d[6].INC_DEC > 0)
                    {
                        StateText.GetComponent<Text>().text = d[6].GUBUN + " <color=red>▲ " + d[6].INC_DEC + "</color>";
                    }
                    else if (d[6].INC_DEC == 0)
                    {
                        StateText.GetComponent<Text>().text = d[6].GUBUN + " 〓 " + d[6].INC_DEC;
                    }

                }
                if (hit.collider.name == d[7].GUBUN)
                {

                    if (d[7].INC_DEC > 0)
                    {
                        StateText.GetComponent<Text>().text = d[7].GUBUN + " <color=red>▲ " + d[7].INC_DEC + "</color>";
                    }
                    else if (d[7].INC_DEC == 0)
                    {
                        StateText.GetComponent<Text>().text = d[7].GUBUN + " 〓 " + d[7].INC_DEC;
                    }

                }
                if (hit.collider.name == d[8].GUBUN)
                {

                    if (d[8].INC_DEC > 0)
                    {
                        StateText.GetComponent<Text>().text = d[8].GUBUN + " <color=red>▲ " + d[8].INC_DEC + "</color>";
                    }
                    else if (d[8].INC_DEC == 0)
                    {
                        StateText.GetComponent<Text>().text = d[8].GUBUN + " 〓 " + d[8].INC_DEC;
                    }

                }
                if (hit.collider.name == d[9].GUBUN)
                {

                    if (d[9].INC_DEC > 0)
                    {
                        StateText.GetComponent<Text>().text = d[9].GUBUN + " <color=red>▲ " + d[9].INC_DEC + "</color>";
                    }
                    else if (d[9].INC_DEC == 0)
                    {
                        StateText.GetComponent<Text>().text = d[9].GUBUN + " 〓 " + d[9].INC_DEC;
                    }

                }
                if (hit.collider.name == d[10].GUBUN)
                {

                    if (d[10].INC_DEC > 0)
                    {
                        StateText.GetComponent<Text>().text = d[10].GUBUN + " <color=red>▲ " + d[10].INC_DEC + "</color>";
                    }
                    else if (d[10].INC_DEC == 0)
                    {
                        StateText.GetComponent<Text>().text = d[10].GUBUN + " 〓 " + d[10].INC_DEC;
                    }

                }
                if (hit.collider.name == d[11].GUBUN)
                {

                    if (d[11].INC_DEC > 0)
                    {
                        StateText.GetComponent<Text>().text = d[11].GUBUN + " <color=red>▲ " + d[11].INC_DEC + "</color>";
                    }
                    else if (d[11].INC_DEC == 0)
                    {
                        StateText.GetComponent<Text>().text = d[11].GUBUN + " 〓 " + d[11].INC_DEC;
                    }

                }
                if (hit.collider.name == d[12].GUBUN)
                {

                    if (d[12].INC_DEC > 0)
                    {
                        StateText.GetComponent<Text>().text = d[12].GUBUN + " <color=red>▲ " + d[12].INC_DEC + "</color>";
                    }
                    else if (d[12].INC_DEC == 0)
                    {
                        StateText.GetComponent<Text>().text = d[12].GUBUN + " 〓 " + d[12].INC_DEC;
                    }

                }
                if (hit.collider.name == d[13].GUBUN)
                {

                    if (d[13].INC_DEC > 0)
                    {
                        StateText.GetComponent<Text>().text = d[13].GUBUN + " <color=red>▲ " + d[13].INC_DEC + "</color>";
                    }
                    else if (d[13].INC_DEC == 0)
                    {
                        StateText.GetComponent<Text>().text = d[13].GUBUN + " 〓 " + d[13].INC_DEC;
                    }

                }
                if (hit.collider.name == d[14].GUBUN)
                {

                    if (d[14].INC_DEC > 0)
                    {
                        StateText.GetComponent<Text>().text = d[14].GUBUN + " <color=red>▲ " + d[14].INC_DEC + "</color>";
                    }
                    else if (d[14].INC_DEC == 0)
                    {
                        StateText.GetComponent<Text>().text = d[14].GUBUN + " 〓 " + d[14].INC_DEC;
                    }

                }
                if (hit.collider.name == d[15].GUBUN)
                {

                    if (d[15].INC_DEC > 0)
                    {
                        StateText.GetComponent<Text>().text = d[15].GUBUN + " <color=red>▲ " + d[15].INC_DEC + "</color>";
                    }
                    else if (d[15].INC_DEC == 0)
                    {
                        StateText.GetComponent<Text>().text = d[15].GUBUN + " 〓 " + d[15].INC_DEC;
                    }

                }
                if (hit.collider.name == d[16].GUBUN)
                {

                    if (d[16].INC_DEC > 0)
                    {
                        StateText.GetComponent<Text>().text = d[16].GUBUN + " <color=red>▲ " + d[16].INC_DEC + "</color>";
                    }
                    else if (d[16].INC_DEC == 0)
                    {
                        StateText.GetComponent<Text>().text = d[16].GUBUN + " 〓 " + d[16].INC_DEC;
                    }

                }
                
            }



        }

        
    }

}