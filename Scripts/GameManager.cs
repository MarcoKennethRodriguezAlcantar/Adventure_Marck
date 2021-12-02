using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public enum GameState { Travel, Battle};
public class GameManager : MonoBehaviour
{
    [SerializeField] private MenuManager playerMenu;
    [SerializeField] private BattleManager battleManager;

    [SerializeField] Camera worldMainCamera;

    private GameState _gameState;

    public AudioClip WorldClip, BattleClip;

    private void Awake()
    {
        
        _gameState = GameState.Travel;
    }

    void Start()
    {
        SoundManager.SharedInstance.PlayMusic(WorldClip);
        playerMenu.OnPersonajeEncontrado += StartBatalla;
        battleManager.OnBattleFinish += EndBattle;
    }

    void StartBatalla()
    {
        SoundManager.SharedInstance.PlayMusic(BattleClip);
        _gameState = GameState.Battle;
        battleManager.gameObject.SetActive(true);
        worldMainCamera.gameObject.SetActive(false);

        battleManager.HandleStartBattle();
    }

    void EndBattle(bool hasWon)
    {
        SoundManager.SharedInstance.PlayMusic(WorldClip);
        _gameState = GameState.Travel;
        battleManager.gameObject.SetActive(false);
        worldMainCamera.gameObject.SetActive(true);
        if (!hasWon)
        {

        }
    }

    private void Update()
    {
        if (_gameState == GameState.Battle)
        {
            battleManager.HandleUpdate();
        }
        else if (_gameState == GameState.Travel)
        {
            playerMenu.HandleUpdate();
            
        }
    }
}
