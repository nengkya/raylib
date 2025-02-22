#include "raylib.h"


int main() {

    const int screenWidth = 1000, screenHeight = 500;
    InitWindow(screenWidth, screenHeight, "BeginScissorMode - Wildan Rhomad Wijanarko");
    SetTargetFPS(60);

    while(!WindowShouldClose()) {

		/*
		the scissor is used to restrict rendering to a specific rectangular region of the screen.
		this is useful for UI clipping, performance optimization, and masking effects.
		*/
		BeginScissorMode(200, 150, 400, 300);
		DrawRectangle(100, 100, 600, 400, BEIGE);

        EndDrawing();

    }

}
