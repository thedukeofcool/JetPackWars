using UnityEngine;

public class PlayerController : MonoBehaviour
{
    public float moveSpeed;
    public float jumpForce;
    public float gravityScale;
    public bool jetpackOn = false;
    public CharacterController controller;
    public GameObject obj;

    private Vector3 moveDirection;

    private void Start()
    {
        controller = GetComponent<CharacterController>();
    }
    private void LateUpdate()
    {
        moveDirection = new Vector3(Input.GetAxis("Horizontal") * moveSpeed, moveDirection.y, Input.GetAxis("Vertical") * moveSpeed);

        if (jetpackOn == false)
        {
            if (Input.GetButtonDown("Jump") && controller.isGrounded)
            {
                moveDirection.y = jumpForce;
            }
        }
        else
        {
            if (Input.GetButtonDown("Jump"))
            {
                moveDirection.y = jumpForce;
            }
        }

        moveDirection.y = moveDirection.y + (Physics.gravity.y / 752.554321f);
        controller.Move(moveDirection * Time.deltaTime);

        if (Input.GetKey(KeyCode.W))
        {
            if (transform.rotation == Quaternion.Euler(-30, 0, 0))
            {
                transform.rotation = Quaternion.Euler(-30, 0, 0);
            }
            else
            {
                transform.Rotate(-0.02f, 0, 0);
            }
        }
        else if (Input.GetKey(KeyCode.S))
        {
            if (transform.rotation == Quaternion.Euler(30, 0, 0))
            {
                transform.rotation = Quaternion.Euler(30, 0, 0);
            }
            else
            {
                transform.Rotate(0.02f, 0, 0);
            }
        }
        else if (Input.GetKey(KeyCode.A))
        {
            if (transform.rotation == Quaternion.Euler(0, 0, 30))
            {
                transform.rotation = Quaternion.Euler(0, 0, 30);
            }
            else
            {
                transform.Rotate(0, 0, 0.02f);
            }
        }
        else if (Input.GetKey(KeyCode.D))
        {
            if (transform.rotation == Quaternion.Euler(0, 0, -30))
            {
                transform.rotation = Quaternion.Euler(0, 0, -30);
            }
            else
            {
                transform.Rotate(0, 0, -0.02f);
            }
        }
        else
        {
            transform.rotation = Quaternion.Euler(0, 0, 0);
        }

        if (Input.GetKey(KeyCode.J))
        {
            jetpackOn = true;   
        }
        if (Input.GetKey(KeyCode.K))
        {
            jetpackOn = false;
        }
    }
}