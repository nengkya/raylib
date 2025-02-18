#include "raylib.h"

void SetCameraMode(Camera3D camera, int mode);

int main() {

    const int screenWidth = 1000, screenHeight = 500;
    InitWindow(screenWidth, screenHeight, "Wildan Rhomad Wijanarko");

    /*
    typedef struct Camera2D {
		Vector2 offset;	camera offset (displacement from target in screen-space)
		Vector2 target;	camera target (focus point in world-space)
		float rotation;	camera rotation in degrees
		float zoom;	camera zoom (scaling), should not be 0
    } Camera2D;

    typedef struct Camera3D {
		Vector3 position; camera position
		Vector3 target;   camera target (where it is looking at)
		Vector3 up;       camera up vector (used for orientation)
		float fovy;       camera field-of-view (in y degrees)
		int projection;   camera projection type (CAMERA_PERSPECTIVE or CAMERA_ORTHOGRAPHIC)
    } Camera3D;
    orthographic is a conventions or a method of representing 3D objects in 2D
    
    typedef struct Vector3 {
		float x;
		float y;
		float z;
    } Vector3;
    */
    Camera3D camera = {0};

	/*
	void SetCameraMode(Camera3D camera, int mode);
		mode					description
		CAMERA_FREE				free camera movement (first-person style)
		CAMERA_ORBITAL			rotates around the target (good for viewing objects)
		CAMERA_FIRST_PERSON		fps-style movement (WASD + mouse look)
		CAMERA_THIRD_PERSON		third-person movement with an orbital view
		CAMERA_CUSTOM			user-defined camera movement
	*/
	SetCameraMode(camera, CAMERA_FREE); /*free camera mode*/

    while(!WindowShouldClose()) {

	/*void BeginMode3D(Camera3D camera); begin 3D mode with custom camera*/
		BeginMode3D(camera);


        EndDrawing();

    }

}
