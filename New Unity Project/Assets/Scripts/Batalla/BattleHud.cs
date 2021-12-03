using Assets.Scripts.Personajes;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BattleHud : MonoBehaviour
{

    public Text personajeNombre;
    public HealBar healBar;

    private Juego _personaje;

    public void SetPersonajeData(Juego personaje)
    {
        _personaje = personaje;
        personajeNombre.text = personaje.Personajes.Nombre;
        healBar.SetHP(1);
        healBar.SetHP((float)(personaje.HP/personaje.MaxHP));
        
    }

    public void UpdatePersonajeData()
    {
        
       StartCoroutine(healBar.SetSmoothHP((float)_personaje.HP / _personaje.MaxHP));

    }
}
