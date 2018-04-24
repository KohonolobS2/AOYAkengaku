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

	//プレハブ関連のゲームobject
	public GameObject prefab;
	GameObject[] Questions =GameObject.FindGameObjectsWithTag("Q");


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
		//Questionのリセット
		GameObject[] Questions =GameObject.FindGameObjectsWithTag("Q");
		foreach (GameObject prefab in Questions)
		{
			Destroy(prefab);
		}
		//シーンの切り替え
		MapCanvas.SetActive(false);
		MainCanvas.SetActive(true);
		img.sprite = img1;
		//背景の変更
		sphere.SetTexture("_MainTex",tx1);
		//クエスチョンの配置
		prefab = (GameObject)Resources.Load("prefab/Question1");
		var obj = Instantiate(prefab) as GameObject;
		prefab.name = "prefab1";
		obj.name=prefab.name;
	}

	public void Point2 ()
	{
		//Questionのリセット
		GameObject[] Questions =GameObject.FindGameObjectsWithTag("Q");
		foreach (GameObject prefab in Questions)
		{
			Destroy(prefab);
		}
		//同上
		MapCanvas.SetActive(false);
		MainCanvas.SetActive(true);
		img.sprite = img2;
		//背景の変更
		sphere.SetTexture("_MainTex",tx2);
		//クエスチョンの配置
		prefab = (GameObject)Resources.Load("prefab/Question2");
		var obj = Instantiate(prefab) as GameObject;
		prefab.name = "prefab2";
		obj.name=prefab.name;
	}

	public void Point3 ()
	{
		//Questionのリセット
		GameObject[] Questions =GameObject.FindGameObjectsWithTag("Q");
		foreach (GameObject prefab in Questions)
		{
			Destroy(prefab);
		}
		//同上
		MapCanvas.SetActive(false);
		MainCanvas.SetActive(true);
		img.sprite = img3;
		//背景の変更
		sphere.SetTexture("_MainTex",tx3);
		//クエスチョンの配置
		prefab = (GameObject)Resources.Load("prefab/Question3");
		var obj = Instantiate(prefab) as GameObject;
		prefab.name = "prefab3";
		obj.name=prefab.name;
	}

	//ミニマップに戻るときのメソッド
	public void MiniMapTouch ()
	{
		MapCanvas.SetActive(true);
		MainCanvas.SetActive(false);

	}
		
}
