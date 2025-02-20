#include "raylib.h"


int main() {

    const int screenWidth = 1000, screenHeight = 500;

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
    */ 
    Camera3D camera;

    Vector3 cubePosition;
    InitWindow(screenWidth, screenHeight, "Camera3Dfree - Wildan Rhomad Wijanarko");
    SetTargetFPS(60);

    while(!WindowShouldClose()) {

	BeginMode3D(camera);

	/*void DrawCube(Vector3 position, float width, float height, float length, Color color);*/
	DrawCube(cubePosition, 2, 2, 2, RED);

	


	EndMode3D();
	EndDrawing();

    }

}
