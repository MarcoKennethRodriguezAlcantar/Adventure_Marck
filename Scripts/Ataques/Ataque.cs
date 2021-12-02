using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ataque 
{

    private AtaqueBase _base;
    
    public AtaqueBase Base
    {
        get => _base;
        set => _base = value;
    }

    public Ataque(AtaqueBase mBase)
    {
        Base = mBase;
    }
}
