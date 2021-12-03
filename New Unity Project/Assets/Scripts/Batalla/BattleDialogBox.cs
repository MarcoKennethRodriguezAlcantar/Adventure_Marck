using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BattleDialogBox : MonoBehaviour
{

    [SerializeField] Text dialogText;

    [SerializeField] GameObject actionSelect;
    [SerializeField] GameObject moveSelect;
    [SerializeField] GameObject moveDescripcion;

    [SerializeField] List<Text> actiontext;
    [SerializeField] List<Text> movetext;

    [SerializeField] Text dañotext;

    [SerializeField] Color selectColor = Color.blue;
    public float charactersPerSecond = 80.0f;

    public bool isWriting = false;

    public AudioClip[] characterSounds;

    public IEnumerator SetDialog(string message)
    {
        isWriting = true;
        dialogText.text = "";
        foreach (var character in message)
        {
            if (character!=' ')
            {
                SoundManager.SharedInstance.RandomSoundEffect(characterSounds);
            }
            dialogText.text += character;
            yield return new WaitForSeconds(1/charactersPerSecond);
        }

        yield return new WaitForSeconds(1.0f);
        isWriting = false;
    }

    public void ToggleDialogText(bool activated)
    {
        dialogText.enabled = activated;
    }

    public void ToggleAction(bool activated)
    {
        actionSelect.SetActive(activated);
    }

    public void ToggleMove(bool activated)
    {
        moveSelect.SetActive(activated);
        moveDescripcion.SetActive(activated);
    }

    public void SelectAction(int selectAction)
    {
        for (int i = 0; i < actiontext.Count; i++)
        {
            if (i == selectAction)
            {
                actiontext[i].color = selectColor;
            }
            else
            {
                actiontext[i].color = Color.black;
            }
        }
    }

    public void SetPersonajeMove(List<Ataque> moves)
    {
        for (int i = 0; i < movetext.Count; i++)
        {
            if (i < moves.Count)
            {
                movetext[i].text = moves[i].Base.Nombre;
            }
            else
            {
                movetext[i].text = "---";
            }
        }
    }

    public void SelectMove(int selectmove, Ataque move)
    {
        for (int i = 0; i < movetext.Count; i++)
        {
            if (i == selectmove)
            {
                movetext[i].color = selectColor;
            }
            else
            {
                movetext[i].color = Color.black;
            }

            dañotext.text = $"Daño {move.Base.Poder}";
        }
    }

  
}
