using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;
using System; // 2.1 ���ӽ����̽� Serializable
using System.IO; // 2.1 ���ӽ����̽� File


[System.Serializable]
public class data
{
    public int accumulatedFirstCnt;
    public int accumulatedSecondCnt;
    public String baseDate;//��� ��������
    public int firstCnt;//���� ��� (1�� ����)
    public int secondCnt;//���� ��� (2�� ����)
    public String sido;//������Ī
    public int totalFirstCnt;//��ü ���� ��� (1�� ����)
    public int totalSecondCnt;//��ü ���� ��� (2�� ����)
    
}
[System.Serializable]
public class apiData
{
    public int currenCount;
    public data[] data;
    public int matchCount;
    public int page;
    public int perPage;
    public int totoalCount;
}

public class ImmunizationStatisticsAPI : MonoBehaviour
{
    string getResult;
    apiData d;

    bool isOnLoading = true;

    void Start()
    {
        StartCoroutine(LoadData());

    }

    private void Update()
    {

    }

    IEnumerator LoadData() //json ���ڿ� �޾ƿ���
    {
        string GetDataUrl = "https://api.odcloud.kr/api/15077756/v1/vaccine-stat?page=1&perPage=18&cond%5BbaseDate%3A%3AGTE%5D=2021-06-03&serviceKey=3S0m0YB0Gt%2BfX9GnAyZLZ9IZDwnhYKJkK2mBw8WNIJoUf1SGiQSKVOzb3wyH8sYlcbLmrk4rbPbpkAleRRQ8jQ%3D%3D";
        //����+17�� �õ�
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



                    ProcessPlayer(getResult);
                }
            }
        }
    }


    private void ProcessPlayer(string getResult)
    {
        d = JsonUtility.FromJson<apiData>(getResult);
       

    }

}