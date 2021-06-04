using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;
using System;
using System.IO;
using System.Xml;
//�׷����� ������ �����غ���

public class Chart : MonoBehaviour
{

    //������ �׷��� ����
    public int count4;

    public GameObject stickPrf; //������ ����׷��� ���
    public float dist = 1.2f;   //����׷��� �Ÿ�

    //�迭(array) = �⼮�� ��ȣ�� ��Ī��Ű�� ����(0������ ����)
    public float[] score;   //����ǥ(csv�� �Ľ̵Ǿ��ٰ� �����Ѵ�)

    public float maxScale;  //100%�϶��� ����

    // Use this for initialization
    void Start()
    {
        //ó�������� ��ġ�� ���� ����(0,0,0)
        Vector3 pos = Vector3.zero;

        //for(int i = 0; i < count; i++)
        for (int i = 0; i < score.Length; i++)
        {
            //����׷����� ������
            GameObject stick = Instantiate(stickPrf);
            //����׷����� ��ġ��Ű��
            stick.transform.position = pos;

            //���� ������� ��ġ�� ������Ʈ ����
            pos += Vector3.up * dist;

            //������� ����׷����� ���̸� ������
            //����׷��� ���� = score[i](0~1) * maxscale;
            stick.transform.localScale = new Vector3(score[i] * maxScale, 1, 1);
        }
    }
}
    // Update is called once per frame
