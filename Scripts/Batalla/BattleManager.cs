using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum BattleState
{
    StartBattle,
    PlayerSelectAction,
    PlayerMove,
    EnemyMove,
    Busy
}




public class BattleManager : MonoBehaviour
{
    [SerializeField] public BattleUnit playerUnit;
    [SerializeField] public BattleHud playerHud;

    [SerializeField] public BattleUnit enemyplayerUnit;
    [SerializeField] public BattleHud enemyplayerHud;

    [SerializeField] public BattleDialogBox battleDialogBox;


    public event Action<bool> OnBattleFinish;

    public BattleState state;
    public void HandleStartBattle()
    {
        StartCoroutine( SetupBattle());
    }

    public IEnumerator SetupBattle()
    {
        state = BattleState.StartBattle;

        playerUnit.SetupPersonaje();
        playerHud.SetPersonajeData(playerUnit.Personaje);

        battleDialogBox.SetPersonajeMove(playerUnit.Personaje.Ataques);

        enemyplayerUnit.SetupPersonaje();
        enemyplayerHud.SetPersonajeData(enemyplayerUnit.Personaje);

        yield return battleDialogBox.SetDialog($"{enemyplayerUnit.Personaje.Personajes.Nombre}: ¡Alto hay! Yo soy el rey bandido y vengo por mis pertenecías.");
        yield return new WaitForSeconds(0.8f);
        yield return battleDialogBox.SetDialog($"{playerUnit.Personaje.Personajes.Nombre}: Esta bien luchemos.");
        yield return new WaitForSeconds(0.8f);
        yield return battleDialogBox.SetDialog($"{enemyplayerUnit.Personaje.Personajes.Nombre}: Te venceré y me quedare con esa armadura.");
        PlayerAction();
    }

    void PlayerAction()
    {
        state = BattleState.PlayerSelectAction;
        StartCoroutine(battleDialogBox.SetDialog("Selecciona una accion"));
        battleDialogBox.ToggleDialogText(true);
        battleDialogBox.ToggleAction(true);
        battleDialogBox.ToggleMove(false);
        currentSelecteAction = 0;
        battleDialogBox.SelectAction(currentSelecteAction);
    }

    void PlayerMovement()
    {
        state = BattleState.PlayerMove;
        battleDialogBox.ToggleDialogText(false);
        battleDialogBox.ToggleAction(false);
        battleDialogBox.ToggleMove(true);
        currentSelectedMove = 0;
        battleDialogBox.SelectMove(currentSelectedMove, playerUnit.Personaje.Ataques[currentSelectedMove]);
    }

    IEnumerator EnemyAction()
    {
        state = BattleState.EnemyMove;
        Ataque move = enemyplayerUnit.Personaje.RandomMove();
        yield return battleDialogBox.SetDialog($"{enemyplayerUnit.Personaje.Personajes.Nombre} ha usado {move.Base.Nombre}");

        SoundManager.SharedInstance.PlaySound(attacClip);
        enemyplayerUnit.PlayAttackAnimation();
        yield return new WaitForSeconds(1f);
        playerUnit.PlayReciveAttack();
        SoundManager.SharedInstance.PlaySound(damageClip);

        bool isFainted = playerUnit.Personaje.Damage(move, enemyplayerUnit.Personaje.Personajes);
        playerHud.UpdatePersonajeData();
        if (isFainted)
        {
            yield return battleDialogBox.SetDialog($"{playerUnit.Personaje.Personajes.Nombre} ha sido derrotado");
            playerUnit.PlayFaintAnimiation();
            SoundManager.SharedInstance.PlaySound(endClip);
            yield return new WaitForSeconds(1.5f);
            yield return battleDialogBox.SetDialog("Has perdido regresando al Menu");
            yield return new WaitForSeconds(1f);
            OnBattleFinish(false);
        }
        else
        {
            PlayerAction();
        }
    }

    public void HandleUpdate()
    {
        timeSinceLastClick += Time.deltaTime;

        if (battleDialogBox.isWriting)
        {
            return;
        }

        if(state == BattleState.PlayerSelectAction)
        {
            HandeldPlayerSelection();
        }
        else if (state == BattleState.PlayerMove)
        {
            HandeldPlayerMoveSelection();
        }
    }

    private int currentSelecteAction;
    private float timeSinceLastClick;
    public float timeBetweenClicks = 0.1f;

    public AudioClip attacClip, damageClip, endClip, escapeClip;

    void HandeldPlayerSelection()
    {
        if (timeSinceLastClick < timeBetweenClicks)
        {
            return;
        }


        if (Input.GetAxisRaw("Vertical")!=0)
        {

            timeSinceLastClick = 0;

            if (currentSelecteAction == 0)  
            {
                currentSelecteAction ++;
            }
            else if (currentSelecteAction == 1)
            {
                currentSelecteAction--;
            }

            battleDialogBox.SelectAction(currentSelecteAction);
        }

        if (Input.GetAxisRaw("Submit")!=0)
        {
            timeSinceLastClick = 0;
            if (currentSelecteAction == 0)
            {
                PlayerMovement();
            }
            else if (currentSelecteAction == 1)
            {
                StartCoroutine(TryEscape());
            }
        }
        
    }

    private int currentSelectedMove;


    void HandeldPlayerMoveSelection()
    {
        if (timeSinceLastClick < timeBetweenClicks)
        {
            return;
        }

        if (Input.GetAxisRaw("Vertical") != 0)
        {
            timeSinceLastClick = 0;
            currentSelectedMove = (currentSelectedMove + 2) % 4;
            battleDialogBox.SelectMove(currentSelectedMove, playerUnit.Personaje.Ataques[currentSelectedMove]);
        } else

        if (Input.GetAxisRaw("Horizontal") != 0)
        {
            timeSinceLastClick = 0;
            if (currentSelectedMove<=1)
            {
                currentSelectedMove = (currentSelectedMove + 1) % 2;
            }
            else
            {
                currentSelectedMove = (currentSelectedMove - 1) % 2 + 2;
            }
            battleDialogBox.SelectMove(currentSelectedMove, playerUnit.Personaje.Ataques[currentSelectedMove]);
        }

        if (Input.GetAxisRaw("Submit")!=0)
        {
            timeSinceLastClick = 0;
            battleDialogBox.ToggleMove(false);
            battleDialogBox.ToggleDialogText(true);
            StartCoroutine(PerformPlayerMove());
        }
    }

    IEnumerator PerformPlayerMove()
    {
        Ataque move = playerUnit.Personaje.Ataques[currentSelectedMove];
        yield return battleDialogBox.SetDialog($"{playerUnit.Personaje.Personajes.Nombre} ha utilizado {move.Base.Nombre}");

        SoundManager.SharedInstance.PlaySound(attacClip);
        playerUnit.PlayAttackAnimation();
        yield return new WaitForSeconds(1f);
        enemyplayerUnit.PlayReciveAttack();
        SoundManager.SharedInstance.PlaySound(damageClip);

        bool personajedebil = enemyplayerUnit.Personaje.Damage(move, playerUnit.Personaje.Personajes);
        enemyplayerHud.UpdatePersonajeData();
        if (personajedebil)
        {
            yield return battleDialogBox.SetDialog($"{enemyplayerUnit.Personaje.Personajes.Nombre} se a quedado inconciente");
            enemyplayerUnit.PlayFaintAnimiation();
            SoundManager.SharedInstance.PlaySound(endClip);
            yield return new WaitForSeconds(0.8f);
            yield return battleDialogBox.SetDialog($"{enemyplayerUnit.Personaje.Personajes.Nombre}: ¡Aaaaaaah!");
            yield return new WaitForSeconds(0.8f);
            yield return battleDialogBox.SetDialog($"{playerUnit.Personaje.Personajes.Nombre}: . . .");
            yield return new WaitForSeconds(1.5f);
            yield return battleDialogBox.SetDialog("Has ganado regresando al Menu");
            yield return new WaitForSeconds(1f);
            OnBattleFinish(true);
        }
        else
        {
            StartCoroutine(EnemyAction());
        }
    }

    IEnumerator TryEscape()
    {

        state = BattleState.Busy;
        yield return battleDialogBox.SetDialog("Has escapado");
        playerUnit.PlayFaintAnimiation();
        SoundManager.SharedInstance.PlaySound(escapeClip);
        yield return new WaitForSeconds(1.5f);
        yield return battleDialogBox.SetDialog("Regresando al Menu");
        yield return new WaitForSeconds(1f);
        OnBattleFinish(true);
    }
}
