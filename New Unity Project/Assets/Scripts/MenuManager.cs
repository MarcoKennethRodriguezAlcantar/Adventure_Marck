using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MenuManager : MonoBehaviour
{
    public Button ButtonExit;
    public Button ButtonStart;
    public event Action OnPersonajeEncontrado;
    public void BotonStart()
    {
        Debug.Log("Hola");
        OnPersonajeEncontrado();
        //SceneManager.LoadScene("Nivel_1");
    }

    public void BotonQuit()
    {
        Debug.Log("Quitamos la aplicacion");
        Application.Quit();
    }

    public void HandleUpdate()
    {
        
    }

    void Start()
    {
        Button btn = ButtonExit.GetComponent<Button>();
        Button btnStar = ButtonStart.GetComponent<Button>();
        btn.onClick.AddListener(BotonQuit);
        btnStar.onClick.AddListener(BotonStart);
    }

}
