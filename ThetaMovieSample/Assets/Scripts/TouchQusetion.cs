using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;

public class TouchQusetion : MonoBehaviour {

	public GameObject hit_target;
	public GameObject movie1;
	public VideoPlayer vp;
	public GameObject MovieStopButton;



	// Use this for initialization
	void Start () 
	{

		//　動画をループ設定
		//movies[num].loop = true;
		//movies[num].Play();
	}
	
	// Update is called once per frame
	void Update ()
	{
		if (Input.GetMouseButtonDown (0)) {
			Ray ray = Camera.main.ScreenPointToRay (Input.mousePosition);
			RaycastHit hit_info = new RaycastHit ();
			float max_distance = 100f;

			bool is_hit = Physics.Raycast (ray, out hit_info, max_distance); 

			if (is_hit) {
				if (hit_info.transform.name == hit_target.name) {
					//TODO: ヒットした時の処理;
					moviePlay();
				}
			}  
		}

		/*if ((ulong)vp.frame == vp.frameCount)
		{
			//※ここに終了したときの処理など
			Debug.Log("消したよ");
			Debug.Log(vp.frame);
			Debug.Log(vp.frameCount);
			movie1.SetActive(false);
		}*/


	}

	private void moviePlay()
	{
		movie1.SetActive (true); //planeをtrueのする
		MovieStopButton.SetActive(true);
		vp.isLooping=true;
	}

	public void movieStop()
	{
		movie1.SetActive (false); //planeをfalseのする
		MovieStopButton.SetActive(false);
	}



}
