using Assets.Scripts.Personajes;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Juego
{

    private Personajes _personajes;

    public Personajes Personajes
    {
        get => _personajes;
    }
    private int _level;

    public int Level
    {
        get => _level;
    }

    private List<Ataque> _ataque;

    public List<Ataque> Ataques
    {
        get => _ataque;
        set => _ataque = value;
    }

    //Vida actual
    private int _hp;
    public int HP
    {
        get => _hp;
        set => _hp = value;
    }

    public Juego(Personajes personaje, int level)
    {
        _personajes = personaje;
        _level = level;
        _hp = MaxHP;

        _ataque = new List<Ataque>();

        foreach(var lAtaque in _personajes.AprendeAtaques)
        {
            if (lAtaque.Level <= _level)
            {
                _ataque.Add(new Ataque(lAtaque.Ataque));
            }
            if(_ataque.Count >= 4)
            {
                break;
            }
        }
    }

    public int Attack => _personajes.Attack * _level;
    public int MaxHP => _personajes.MaxHP * _level;

    public bool Damage(Ataque move, Personajes attacker)
    {
        float modifi = Random.Range(0.85f, 1.0f);
        float damage = (3*move.Base.Poder);
        int totalDamage = Mathf.FloorToInt(damage * modifi);

        HP -= totalDamage;
        if (HP<=0)
        {
            HP = 0;
            return true;
        }
        else
        {
            return false;
        }
    }

    public Ataque RandomMove()
    {
        int ranId = Random.Range(0, Ataques.Count);
        return Ataques[ranId];
    }

}
