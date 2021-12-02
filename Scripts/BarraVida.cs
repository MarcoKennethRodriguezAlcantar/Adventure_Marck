using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BarraVida : MonoBehaviour
{

    public Image vida;

    public float vidaActual;

    public float vidaMaxima;
    

  
    void Update()
    {

        vida.fillAmount = vidaActual / vidaMaxima;

    }
}
