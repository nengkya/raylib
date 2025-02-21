#include "raylib.h"


int main() {

    const int screenWidth = 800, screenHeight = 450;

    Vector2 position = {100, 100}, position2;

    InitWindow(screenWidth, screenHeight, "Vector2");

    while(!WindowShouldClose()) {

        position2 = GetMousePosition();

        DrawLine(position.x, position.y, position2.x, position2.y, RED);

        EndDrawing();

    }




}
