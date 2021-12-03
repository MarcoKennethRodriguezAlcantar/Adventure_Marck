using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Assets.Scripts.Personajes
{
    [CreateAssetMenu(fileName = "Personaje", menuName = "Personaje/New Personaje")]
    public class Personajes : ScriptableObject
    {
        [SerializeField] private int ID;

        [SerializeField] private string nombre;
        public string Nombre => nombre;

        [TextArea] [SerializeField] private string descripcion;
        public string Descripcion => descripcion;

        [SerializeField] private Sprite personajeSprite;

        public Sprite PersonajeSprite => personajeSprite;


        //Stats

        [SerializeField] private int maxHP;
        public int MaxHP => maxHP;
        [SerializeField] private int attack;
        public int Attack => attack;

        [SerializeField] private List<AprendeAtaque> aprendeAtaque;

        public List<AprendeAtaque> AprendeAtaques => aprendeAtaque;

    }

    [Serializable] 
    public class AprendeAtaque
    {
        [SerializeField] private AtaqueBase ataque;
        public AtaqueBase Ataque => ataque;
        [SerializeField] private int level;
        public int Level => level;
    }
}