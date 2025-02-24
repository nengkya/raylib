#include "raylib.h"


int main() {

    const int screenWidth = 1350, screenHeight = 650;
    InitWindow(screenWidth, screenHeight, "Window Flags - Wildan Rhomad Wijanarko");
    SetTargetFPS(60);

	SetWindowState(FLAG_WINDOW_RESIZABLE);

    while(!WindowShouldClose()) {



        EndDrawing();

    }

}
