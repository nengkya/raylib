#include "raylib.h"


int main() {

    const int screenWidth = 1000, screenHeight = 500;
	Camera3D camera = {0};
    InitWindow(screenWidth, screenHeight, "Camera3D mode - Wildan Rhomad Wijanarko");
    SetTargetFPS(60);

    while(!WindowShouldClose()) {

		BeginMode3D(camera);


		EndMode3D();

		DrawText("Welcome to the third dimension!", 10, 40, 20, DARKGRAY);

		/*void DrawFPS(int posX, int posY); draw current fps*/
		DrawFPS(10, 10);

        EndDrawing();

    }

}
