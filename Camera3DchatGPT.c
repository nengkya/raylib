#include "stdio.h"
#include "raylib.h"


int main(void) {
	printf("HaGa raylib, %s\n", RAYLIB_VERSION); /*5.6-dev*/
    InitWindow(800, 600, "raylib Camera3D Example");
    Camera3D camera = { 0 };
    camera.position = (Vector3){ 0.0f, 10.0f, 10.0f };
    camera.target = (Vector3){ 0.0f, 0.0f, 0.0f };     /*look at point*/
    camera.up = (Vector3){ 0.0f, 1.0f, 0.0f };         /*up direction*/
    camera.fovy = 45.0f;
    camera.projection = CAMERA_PERSPECTIVE;
    /*SetCameraMode(camera, CAMERA_FREE); free camera mode*/

	Vector3 movement = {0.1f, 0.0f, 0.0f}; /*move right*/
	Vector3 rotation = {0.0f, 1.0f, 0.0f}; /*rotate horizontally*/


    while (!WindowShouldClose()) {

		/*
		UpdateCamera is obsolote
		void UpdateCameraPro(Camera3D * camera, Vector3 movement, Vector3 rotation, float zoom);
		*/
		UpdateCameraPro(&camera, movement, rotation, 0.0f);
        
		BeginDrawing();
            ClearBackground(RAYWHITE);

			DrawText(RAYLIB_VERSION, 200, 80, 20, RED);

            BeginMode3D(camera);
                DrawGrid(10, 1.0f);
            EndMode3D();
            DrawText("Move with keys, scroll to zoom", 10, 10, 20, DARKGRAY);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
