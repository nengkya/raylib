#include "raylib.h"


int main() {

    const int screenWidth = 1600, screenHeight = 900;

    float rotation = 0.0f;

    InitWindow(screenWidth, screenHeight, "Basic Shapes - Wildan Rhomad Wijanarko");
    SetTargetFPS(60);

    while(!WindowShouldClose()) {

        /*void DrawCircle(int centerX, int centerY, float radius, Color color);*/
        DrawCircle(screenWidth / 5, 120, 35, DARKBLUE);

        DrawCircleGradient(screenWidth / 5, 220, 60, GREEN, SKYBLUE);

        DrawCircleLines(screenWidth / 5, 340, 80, BEIGE); /*outline*/

        DrawTriangle((Vector2){screenWidth/4.0f * 3.0f, 80.0f},
                     (Vector2){screenWidth/4.0f * 3.0f - 60.0f, 150.0f},
                     (Vector2){screenWidth/4.0f * 3.0f + 60.0f, 150.0f}, VIOLET);

        rotation += 0.2f;

        /*void DrawPoly(Vector2 center, int sides, float radius, float rotation, Color color);*/
        DrawPoly((Vector2){screenWidth / 4.0f * 3, 330}, 6, 80, rotation, BROWN);
        DrawPoly((Vector2){500, 300}, 6, 100, 45.0f, RED);/*rotate 45 degree left*/

        EndDrawing();

    }

}
