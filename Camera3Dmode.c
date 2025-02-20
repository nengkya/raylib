#include "raylib.h"


int main() {

    const int screenWidth = 1000, screenHeight = 500;
    InitWindow(screenWidth, screenHeight, "Camera3D mode - Wildan Rhomad Wijanarko");

	/*
	camera value must set or cube wont show
	CAMERA_PERSPECTIVE  = 0
	1. objects farther away appear smaller, simulating real-world depth
	2. uses a field of view (fovy) to determine perspective
	3. used in 3D games and simulations
	CAMERA_ORTHOGRAPHIC = 1
	1. objects remain the same size, regardless of distance
	2. no perspective distortion
	3. used for top-down games, strategy games, and 2D/3D hybrid visuals
	*/
    Camera3D camera;
	camera.position   = (Vector3){10.0f, 10.0f, 10.0f};
    camera.target	  = (Vector3){ 1,     1,     1   };	/*camera looking at point. bigger is left. negative is right*/
    camera.up		  = (Vector3){ 3.0f, 11.0f,  7.0f};	/*camera up vector (rotation towards target)*/
    camera.fovy		  = 35;								/*camera field-of-view Y, lesser is bigger*/
    camera.projection = CAMERA_PERSPECTIVE;
	/*
    typedef struct Vector3 {
		float x;
		float y;
		float z;
    } Vector3;
    */
	Vector3 cubePosition = { 0.0f, 0.0f, 0.0f };
	SetTargetFPS(60);

    while(!WindowShouldClose()) {

		/*BeginDrawing();*/
		BeginMode3D(camera);
		DrawCube(cubePosition, 2.0f, 2.0f, 2.0f, RED);
		DrawCubeWires(cubePosition, 2.0f, 2.0f, 2.0f, MAROON); /*draw cube lines*/

		EndMode3D();

		DrawText("Welcome to the third dimension!", 10, 40, 20, DARKGRAY);

		/*void DrawFPS(int posX, int posY); draw current fps*/
		DrawFPS(10, 10);

        EndDrawing();

    }

}
