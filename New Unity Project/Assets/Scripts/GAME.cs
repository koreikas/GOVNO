using UnityEngine;
using UnityEngine.UI;
public class GAME : MonoBehaviour
{
    public Text scoretext;
    public Text HP;
    public GameObject shop;
    public GameObject kon;
    private int score;
    int bonus = 1;
    public int hp = 1000;
    public void Start()
    {
        shop.SetActive(false);
        kon.SetActive(false);
    }
    public void shopOP()
    {
        shop.SetActive(!(shop.activeSelf));
    }
    public void Sila()
    {
        if (score>=20)
        {
            bonus += 1;
        }
        else
        {
            Debug.Log("Не зватает денег!");
        }
    }
    public void ClickOn()
    {
        score += bonus;
        scoretext.text = score + "$";
        hp -= bonus;
        HP.text = hp+"";
    }


    private void FixedUpdate()
    {
        if (hp <= 0) kon.SetActive(true);
    }
}
