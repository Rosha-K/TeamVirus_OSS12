using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using System; // 2.1 ���ӽ����̽� Serializable
using System.IO; // 2.1 ���ӽ����̽� File
[Serializable]
public class JsonData
{
    
    public String GUBUN;
    public String INC_DEC;
    public String STD_DAY;


}

public class SidoStateAPI : MonoBehaviour
{
    string jsonResult;
    JsonData sido;
    bool isOnLoading = true;

    void Start()
    {
        StartCoroutine(LoadData());








    }


    IEnumerator LoadData() //json ���ڿ� �޾ƿ���
    {
        string GetDataUrl = "http://openapi.data.go.kr/openapi/service/rest/Covid19/getCovid19SidoInfStateJson?serviceKey=MwUP%2BblvFPOSrJLoWUyH7o2w0o01f8KWn4sMeOl4hvG%2BM%2FZ00VD3X6QnbRdY3lfjz3EqrlnPuAybfF0qTmrv1g%3D%3D&pageNo=1&_returnType=json";
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
                    isOnLoading = false;/*
                    jsonResult =
                        System.Text.Encoding.UTF8.GetString(www.downloadHandler.data);*/
                    //sido = 

                   // Debug.Log(jsonResult);
                }
            }
        }
    }

}