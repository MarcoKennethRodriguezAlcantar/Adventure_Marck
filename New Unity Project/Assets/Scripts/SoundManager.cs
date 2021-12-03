using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Random = UnityEngine.Random;
public class SoundManager : MonoBehaviour
{
    [SerializeField] private AudioSource effectSource, musicSource;

    public Vector2 pitchRange = Vector2.zero;

    public static SoundManager SharedInstance;

    public Slider sliderMusic, sliderSFX; 

    private void Awake()
    {
        if (SharedInstance != null)
        {
            Destroy(gameObject);
        }
        else
        {
            SharedInstance = this;
        }
        DontDestroyOnLoad(gameObject);
    }

    public void PlaySound(AudioClip clip)
    {
        effectSource.Stop();
        effectSource.clip = clip;
        effectSource.Play();
    }
    public void PlayMusic(AudioClip clip)
    {
        musicSource.Stop();
        musicSource.clip = clip;
        musicSource.Play();
    }
    public void RandomSoundEffect(params AudioClip[] clip)
    {
        int index = Random.Range(0, clip.Length);
        float pitch = Random.Range(pitchRange.x, pitchRange.y);

        effectSource.pitch = pitch;
        PlaySound(clip[index]);
    }

    public void OnMusicVolumenUpdate()
    {
        musicSource.volume = sliderMusic.value;
    }

    public void OnSFXVolumenUpdate()
    {
        effectSource.volume = sliderSFX.value;
    }




}
