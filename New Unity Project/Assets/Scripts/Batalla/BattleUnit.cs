using Assets.Scripts.Personajes;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;

[RequireComponent(typeof(Image))]
public class BattleUnit : MonoBehaviour
{
    public Personajes _base;
    public int _level;
    public bool isPlayer;

    public Juego Personaje { get; set; }
    private Image perosnajeImage;
    private Sprite perosnajeImages;
    Vector3 initial;
    private Color initialColor;


    private void Awake()
    {
        perosnajeImage = GetComponent<Image>();
        initial = perosnajeImage.transform.localPosition;
        initialColor = perosnajeImage.color;
    }
    public void SetupPersonaje()
    {
        Personaje =  new Juego(_base, _level);

        perosnajeImage.sprite = (isPlayer ? Personaje.Personajes.PersonajeSprite : Personaje.Personajes.PersonajeSprite);
        perosnajeImage.color = initialColor;

        PlayStartAnimiation();


    }

    public void PlayStartAnimiation()
    {

        perosnajeImage.transform.localPosition = new Vector3(initial.x + (isPlayer ? -1 : 1) * 400, initial.y);

        perosnajeImage.transform.DOLocalMoveX(initial.x, 1.0f);
    }

    public void PlayAttackAnimation()
    {
        var seq = DOTween.Sequence();
        seq.Append(perosnajeImage.transform.DOLocalMoveX(initial.x + (isPlayer?1:-1) * 250, 0.3f));
        seq.Append(perosnajeImage.transform.DOLocalMoveX(initial.x, 0.3f));
    }

    public void PlayReciveAttack()
    {
        var seq = DOTween.Sequence();
        seq.Append(perosnajeImage.DOColor(Color.red, 0.13f));
        seq.Append(perosnajeImage.DOColor(initialColor, 0.13f));
        seq.Append(perosnajeImage.DOColor(Color.red, 0.13f));
        seq.Append(perosnajeImage.DOColor(initialColor, 0.13f));
    }

    public void PlayFaintAnimiation()
    {
        var seq = DOTween.Sequence();
        seq.Append(perosnajeImage.transform.DOLocalMoveY(initial.y - 200, 1f));
        seq.Join(perosnajeImage.DOFade(0f, 1f));
    }
}
