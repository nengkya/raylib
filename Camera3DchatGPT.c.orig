#include "raylib.h"

int main(void) {
    InitWindow(800, 600, "raylib Camera3D Example");
    Camera3D camera = { 0 };
    camera.position = (Vector3){ 0.0f, 10.0f, 10.0f };
    camera.target = (Vector3){ 0.0f, 0.0f, 0.0f };     /*look at point*/
    camera.up = (Vector3){ 0.0f, 1.0f, 0.0f };         /*up direction*/
    camera.fovy = 45.0f;
    camera.projection = CAMERA_PERSPECTIVE;
    /*SetCameraMode(camera, CAMERA_FREE); free camera mode*/

    while (!WindowShouldClose()) {
        UpdateCamera(&camera, 1); // Update camera movement

        BeginDrawing();
            ClearBackground(RAYWHITE);
            BeginMode3D(camera);
                DrawGrid(10, 1.0f);
            EndMode3D();
            DrawText("Move with keys, scroll to zoom", 10, 10, 20, DARKGRAY);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
