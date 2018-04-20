using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TouchQusetion : MonoBehaviour {

	public GameObject hit_target;
	public GameObject movie1;
	public VideoPlayer vp;
	public GameObject MovieStopButton;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	public GameObject hit_target;

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
					Debug.Log("タップされました");
				}
			}   
		}
	}
}
