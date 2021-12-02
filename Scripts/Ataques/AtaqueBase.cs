using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Ataque", menuName = "Ataque/New Ataque")]
public class AtaqueBase : ScriptableObject
{

    [SerializeField] private string nombre;
    public string Nombre => nombre;

    [TextArea] [SerializeField] private string descripcion;
    public string Descripcion => descripcion;

    [SerializeField] private int poder;
    public int Poder => poder;

    [SerializeField] private int accuracy;
    public int Accuracy => accuracy;

}
