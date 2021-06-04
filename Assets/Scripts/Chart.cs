using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;
using System;
using System.IO;
using System.Xml;
//그래프를 나란히 정렬해보자

public class Chart : MonoBehaviour
{

    //생성할 그래프 갯수
    public int count4;

    public GameObject stickPrf; //생성할 막대그래프 모양
    public float dist = 1.2f;   //막대그래의 거리

    //배열(array) = 출석부 번호로 매칭시키는 원리(0번부터 시작)
    public float[] score;   //점수표(csv로 파싱되었다고 가정한다)

    public float maxScale;  //100%일때의 높이

    // Use this for initialization
    void Start()
    {
        //처음생성할 위치는 월드 제로(0,0,0)
        Vector3 pos = Vector3.zero;

        //for(int i = 0; i < count; i++)
        for (int i = 0; i < score.Length; i++)
        {
            //막대그래프를 만들자
            GameObject stick = Instantiate(stickPrf);
            //막대그래프를 위치시키자
            stick.transform.position = pos;

            //새로 만들어질 위치를 업데이트 하자
            pos += Vector3.up * dist;

            //만들어진 막대그래프의 높이를 정하자
            //막대그래프 높이 = score[i](0~1) * maxscale;
            stick.transform.localScale = new Vector3(score[i] * maxScale, 1, 1);
        }
    }
}
    // Update is called once per frame
