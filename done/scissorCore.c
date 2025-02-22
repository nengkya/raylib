#include "raylib.h"


int main() {

    const int screenWidth = 1000, screenHeight = 500;
    InitWindow(screenWidth, screenHeight, "Wildan Rhomad Wijanarko");
    SetTargetFPS(60);

	Rectangle scissorArea = {0, 0, 300, 300};

    while(!WindowShouldClose()) {

		scissorArea.x = GetMouseX() - scissorArea.width  / 2;
		scissorArea.y = GetMouseY() - scissorArea.height / 2;

		BeginScissorMode(scissorArea.x, scissorArea.y, scissorArea.width, scissorArea.height);

		DrawRectangle(0, 0, GetScreenWidth(), GetScreenHeight(), LIME);



        EndDrawing();

    }

}
