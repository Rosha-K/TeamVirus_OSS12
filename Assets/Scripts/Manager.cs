using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Manager : MonoBehaviour
{
    // Start is called before the first frame update
    uint exitCountValue = 0;

    void Start()
    {
        ApplicationChrome.statusBarState = ApplicationChrome.States.TranslucentOverContent;

        
    }

    // Update is called once per frame
    void Update()
    {

        if (Input.GetKeyDown(KeyCode.Escape))
        {
            Application.Quit();


        }
    }
    

}
