using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using UnityEngine.Networking;
using System.IO;
public class Infectionstatus2 : MonoBehaviour
{
    public apiData S_ImmuzData;
    string getResult;
    bool isOnLoading = true;
    public Text Total1stCnt;
    public Text Total1stNew;
    public Text Total2stCnt;
    public Text Total2stNew;
    public Text jeju1;
    public Text jeju2;
    public Text gn1;
    public Text gn2;
    public Text gb1;
    public Text gb2;
    public Text jn1;
    public Text jn2;
    public Text jb1;
    public Text jb2;
    public Text cn1;
    public Text cn2;
    public Text cb1;
    public Text cb2;
    public Text gw1;
    public Text gw2;
    public Text gg1;
    public Text gg2;
    public Text sj1;
    public Text sj2;
    public Text us1;
    public Text us2;
    public Text dj1;
    public Text dj2;
    public Text gj1;
    public Text gj2;
    public Text ic1;
    public Text ic2;
    public Text dg1;
    public Text dg2;
    public Text bs1;
    public Text bs2;
    public Text so1;
    public Text so2;
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(LoadDataI());
    }
    public void bottomStatistics()
    {
        string temp;
        temp = string.Format("{0:#,0}", S_ImmuzData.data[0].totalFirstCnt);
        Total1stCnt.GetComponent<Text>().text = temp;
        temp = string.Format("{0:#,0}", S_ImmuzData.data[0].firstCnt);
        Total1stNew.GetComponent<Text>().text = temp;
        temp = string.Format("{0:#,0}", S_ImmuzData.data[0].totalSecondCnt);
        Total2stCnt.GetComponent<Text>().text = temp;
        temp = string.Format("{0:#,0}", S_ImmuzData.data[0].secondCnt);
        Total2stNew.GetComponent<Text>().text = temp;

        temp = string.Format("{0:#,0}", S_ImmuzData.data[17].totalFirstCnt);
        jeju1.GetComponent<Text>().text = temp;
        temp = string.Format("{0:#,0}", S_ImmuzData.data[17].totalSecondCnt);
        jeju2.GetComponent<Text>().text = temp;

        temp = string.Format("{0:#,0}", S_ImmuzData.data[16].totalFirstCnt);
        gn1.GetComponent<Text>().text = temp;

        temp = string.Format("{0:#,0}", S_ImmuzData.data[16].totalSecondCnt);
        gn2.GetComponent<Text>().text = temp;

        temp = string.Format("{0:#,0}", S_ImmuzData.data[15].totalFirstCnt);
        gb1.GetComponent<Text>().text = temp;
        
        temp = string.Format("{0:#,0}", S_ImmuzData.data[15].totalSecondCnt);
        gb2.GetComponent<Text>().text = temp;

        temp = string.Format("{0:#,0}", S_ImmuzData.data[14].totalFirstCnt);
        jn1.GetComponent<Text>().text = temp;
        
        temp = string.Format("{0:#,0}", S_ImmuzData.data[14].totalSecondCnt);
        jn2.GetComponent<Text>().text = temp;

        temp = string.Format("{0:#,0}", S_ImmuzData.data[13].totalFirstCnt);
        jb1.GetComponent<Text>().text = temp;
        
        temp = string.Format("{0:#,0}", S_ImmuzData.data[13].totalSecondCnt);
        jb2.GetComponent<Text>().text = temp;

        temp = string.Format("{0:#,0}", S_ImmuzData.data[12].totalFirstCnt);
        cn1.GetComponent<Text>().text = temp;
        
        temp = string.Format("{0:#,0}", S_ImmuzData.data[12].totalSecondCnt);
        cn2.GetComponent<Text>().text = temp;

        temp = string.Format("{0:#,0}", S_ImmuzData.data[11].totalFirstCnt);
        cb1.GetComponent<Text>().text = temp;
        
        temp = string.Format("{0:#,0}", S_ImmuzData.data[11].totalSecondCnt);
        cb2.GetComponent<Text>().text = temp;

        temp = string.Format("{0:#,0}", S_ImmuzData.data[10].totalFirstCnt);
        gw1.GetComponent<Text>().text = temp;
        
        temp = string.Format("{0:#,0}", S_ImmuzData.data[10].totalSecondCnt);
        gw2.GetComponent<Text>().text = temp;


        temp = string.Format("{0:#,0}", S_ImmuzData.data[9].totalFirstCnt);
        gg1.GetComponent<Text>().text = temp;
        temp = string.Format("{0:#,0}", S_ImmuzData.data[9].totalSecondCnt);
        gg2.GetComponent<Text>().text = temp;

        temp = string.Format("{0:#,0}", S_ImmuzData.data[7].totalFirstCnt);
        sj1.GetComponent<Text>().text = temp;
        
        temp = string.Format("{0:#,0}", S_ImmuzData.data[7].totalSecondCnt);
        sj2.GetComponent<Text>().text = temp;

        temp = string.Format("{0:#,0}", S_ImmuzData.data[5].totalFirstCnt);
        us1.GetComponent<Text>().text = temp;
        temp = string.Format("{0:#,0}", S_ImmuzData.data[5].totalSecondCnt);
        us2.GetComponent<Text>().text = temp;

        temp = string.Format("{0:#,0}", S_ImmuzData.data[8].totalFirstCnt);
        dj1.GetComponent<Text>().text = temp;
        temp = string.Format("{0:#,0}", S_ImmuzData.data[8].totalSecondCnt);
        dj2.GetComponent<Text>().text = temp;

        temp = string.Format("{0:#,0}", S_ImmuzData.data[6].totalFirstCnt);
        gj1.GetComponent<Text>().text = temp;
        temp = string.Format("{0:#,0}", S_ImmuzData.data[6].totalSecondCnt);
        gj2.GetComponent<Text>().text = temp;


        temp = string.Format("{0:#,0}", S_ImmuzData.data[4].totalFirstCnt);
        ic1.GetComponent<Text>().text = temp;
        temp = string.Format("{0:#,0}", S_ImmuzData.data[4].totalSecondCnt);
        ic2.GetComponent<Text>().text = temp;

        temp = string.Format("{0:#,0}", S_ImmuzData.data[3].totalFirstCnt);
        dg1.GetComponent<Text>().text = temp;
        temp = string.Format("{0:#,0}", S_ImmuzData.data[3].totalSecondCnt);
        dg2.GetComponent<Text>().text = temp;

        temp = string.Format("{0:#,0}", S_ImmuzData.data[2].totalFirstCnt);
        bs1.GetComponent<Text>().text = temp;
        temp = string.Format("{0:#,0}", S_ImmuzData.data[2].totalSecondCnt);
        bs2.GetComponent<Text>().text = temp;

        temp = string.Format("{0:#,0}", S_ImmuzData.data[1].totalFirstCnt);
        so1.GetComponent<Text>().text = temp;
        temp = string.Format("{0:#,0}", S_ImmuzData.data[1].totalSecondCnt);
        so2.GetComponent<Text>().text = temp;







    }
    IEnumerator LoadDataI() //json 문자열 받아오기
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



                    ProcessPlayerI(getResult);
                    bottomStatistics();
                }
            }
        }
    }


    private void ProcessPlayerI(string getResult)
    {
        S_ImmuzData = JsonUtility.FromJson<apiData>(getResult);


    }
    void Update()
    {
        
    }
}
