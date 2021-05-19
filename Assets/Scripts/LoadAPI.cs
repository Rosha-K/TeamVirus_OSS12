using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class LoadAPI : MonoBehaviour
{
    string jsonResult;
    bool isOnLoading = true;

    void Start()
    {
        StartCoroutine(LoadData());
    }


    IEnumerator LoadData() //json 문자열 받아오기
    {
        string GetDataUrl = "http://openapi.data.go.kr/openapi/service/rest/Covid19/getCovid19SidoInfStateJson?serviceKey=MwUP%2BblvFPOSrJLoWUyH7o2w0o01f8KWn4sMeOl4hvG%2BM%2FZ00VD3X6QnbRdY3lfjz3EqrlnPuAybfF0qTmrv1g%3D%3D&pageNo=1&_returnType=json";
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
                    jsonResult =
                        System.Text.Encoding.UTF8.GetString(www.downloadHandler.data);
                    Debug.Log(jsonResult);
                }
            }
        }
    }

}