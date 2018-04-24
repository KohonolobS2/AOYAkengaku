using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PointClick : MonoBehaviour {
	//ミニマップの画像(要追加)
	public Sprite img1;
	public Sprite img2;
	public Sprite img3;
	public Sprite img4;
	public Image img;

	//シーンの定義
	public GameObject MapCanvas;
	public GameObject MainCanvas;

	//球のマテリアル定義
	public Material sphere;

	//球に貼り付けるテクスチャの定義(要追加)
	public Texture tx1;
	public Texture tx2;
	public Texture tx3;
	public Texture tx4;

	//question達(要追加)
	public GameObject Question1;
	public GameObject Question2;
	public GameObject Question3;
	public GameObject Question4;


	// Use this for initialization
	void Start () 
	{
		//img = this.GetComponent<Image>();
	}
	
	// Update is called once per frame
	void Update () 
	{
		
	}

	//ミニマップに戻るときのメソッド
	public void MiniMapTouch ()
	{
		MapCanvas.SetActive(true);
		MainCanvas.SetActive(false);
	}

	//キャンバスの切り替え
	private void ChangeCanvas(){
		MapCanvas.SetActive (false);
		MainCanvas.SetActive (true);
	}

	//各地点をクリックした時の動作なので要追加
	public void Point1 ()
	{
		//Questionのリセット
		GameObject[] Questions =GameObject.FindGameObjectsWithTag("Q");
		foreach (GameObject Question in Questions)
		{
			Question.SetActive (false);
		}
		Question1.SetActive (true);	//この地点のQuestionの設置
		ChangeCanvas();	//キャンバスの切り替え
		img.sprite = img1;	//ミニマップの切り替え
		sphere.SetTexture("_MainTex",tx1);	//背景の変更
	}

	public void Point2 ()
	{
		//Questionのリセット
		GameObject[] Questions =GameObject.FindGameObjectsWithTag("Q");
		foreach (GameObject Question in Questions)
		{
			Question.SetActive (false);
		}
		Question2.SetActive (true);	//この地点のQuestionの設置
		ChangeCanvas();	//キャンバスの切り替え
		img.sprite = img2;	//ミニマップの切り替え
		sphere.SetTexture("_MainTex",tx2);	//背景の変更
	}

	public void Point3 ()
	{
		//Questionのリセット
		GameObject[] Questions =GameObject.FindGameObjectsWithTag("Q");
		foreach (GameObject Question in Questions)
		{
			Question.SetActive (false);
		}
		Question3.SetActive (true);	//この地点のQuestionの設置
		ChangeCanvas();	//キャンバスの切り替え
		img.sprite = img3;	//ミニマップの切り替え
		sphere.SetTexture("_MainTex",tx3);	//背景の変更
	}

	public void Point4 ()
	{
		//Questionのリセット
		GameObject[] Questions =GameObject.FindGameObjectsWithTag("Q");
		foreach (GameObject Question in Questions)
		{
			Question.SetActive (false);
		}
		Question4.SetActive (true);	//この地点のQuestionの設置
		ChangeCanvas();	//キャンバスの切り替え
		img.sprite = img4;	//ミニマップの切り替え
		sphere.SetTexture("_MainTex",tx4);	//背景の変更
	}

}
