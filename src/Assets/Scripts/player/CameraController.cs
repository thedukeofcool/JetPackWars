using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour
{

    public Transform target;

    public float smoothSpeed = 0.125f;
    public Vector3 offset;

    private void Update()
    {
        Vector3 DesPos = target.position + offset;
        Vector3 SmoPos = Vector3.LerpUnclamped(transform.position, DesPos, smoothSpeed);
        transform.position = SmoPos;

        transform.LookAt(target);
    }

}
