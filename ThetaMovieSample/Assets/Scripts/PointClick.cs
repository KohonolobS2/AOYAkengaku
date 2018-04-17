using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PointClick : MonoBehaviour {
	//ミニマップの画像
	public Sprite img1;
	public Sprite img2;
	public Sprite img3;
	public Image img;

	//シーンの定義
	public GameObject MapCanvas;
	public GameObject MainCanvas;

	//球のマテリアル定義
	public Material sphere;

	//球に貼り付けるテクスチャの定義
	public Texture tx1;
	public Texture tx2;
	public Texture tx3;


	// Use this for initialization
	void Start () 
	{
		//img = this.GetComponent<Image>();
	}
	
	// Update is called once per frame
	void Update () 
	{
		
	}

	public void Point1 ()
	{
		//シーンの切り替え
		MapCanvas.SetActive(false);
		MainCanvas.SetActive(true);
		img.sprite = img1;
		//背景の変更
		sphere.SetTexture("_MainTex",tx1);
	}

	public void Point2 ()
	{
		//同上
		MapCanvas.SetActive(false);
		MainCanvas.SetActive(true);
		img.sprite = img2;
		//背景の変更
		sphere.SetTexture("_MainTex",tx2);
	}

	public void Point3 ()
	{
		//同上
		MapCanvas.SetActive(false);
		MainCanvas.SetActive(true);
		img.sprite = img3;
		//背景の変更
		sphere.SetTexture("_MainTex",tx3);
	}

	public void MiniMapTouch ()
	{
		MapCanvas.SetActive(true);
		MainCanvas.SetActive(false);

	}
		
}
