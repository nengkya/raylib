#include "raylib.h"


int main() {

    const int screenWidth = 1000, screenHeight = 500;

    InitWindow(screenWidth, screenHeight, "Windows Flags - Wildan Rhomad Wijanarko");

    while(!WindowShouldClose()) {

	/*void ToggleFullscreen(void);*/
	if (IsKeyPressed(KEY_F)) ToggleFullscreen();

        EndDrawing();

    }

}
