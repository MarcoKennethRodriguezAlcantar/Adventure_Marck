using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HealBar : MonoBehaviour
{

    public GameObject healthBar;
    public Color BarColor
    {
        get
        {
            var localScale = healthBar.transform.localScale.x;
            if (localScale < 0.15f)
            {
                return new Color(210f / 255, 2f / 255, 1f / 255);
            }
            else if (localScale < 0.5f)
            {
                return new Color(223f / 255, 223f / 255, 0f / 255);
            }
            else
            {
                return new Color(1f/255, 159f / 255, 49f / 255);
            }
        }
    }
    public void SetHP(float normalizedValue)
    {
        healthBar.transform.localScale = new Vector3(normalizedValue, 1.0f);
        healthBar.GetComponent<Image>().color = BarColor;
    } 

    public IEnumerator SetSmoothHP(float normalizedValue)
    {
        float currenScale = healthBar.transform.localScale.x;
        float updateQuantity = currenScale - normalizedValue;
        while (currenScale - normalizedValue > Mathf.Epsilon)
        {
            currenScale -= updateQuantity * Time.deltaTime;
            healthBar.transform.localScale = new Vector3(currenScale, 1);
            healthBar.GetComponent<Image>().color = BarColor;
            yield return null;
        }
        healthBar.transform.localScale = new Vector3(normalizedValue, 1);
    }

}
