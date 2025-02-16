#include "raylib.h"


int main() {

    const int screenWidth = 1600, screenHeight = 900;

    Vector2 ballPosition = {(float)screenWidth / 2, (float)screenHeight / 2};

    InitWindow(screenWidth, screenHeight, "Wildan Rhomad Wijanarko");

    SetTargetFPS(60); /*biar gambar ga kecepetan*/

    while (!WindowShouldClose()) {

        /*bool IsKeyDown(int key);*/
        if (IsKeyDown(KEY_RIGHT)) ballPosition.x += 2.0f;

        /*reset frame*/
        ClearBackground(GREEN);

        /*
        void DrawCircle(int centerX, int centerY, float radius, Color color);

        typedef enum {KEY_RIGHT 262} KeyboardKey;

        typedef struct Color {
            unsigned char r;  //red   component (0-255)
            unsigned char g;  //green component (0-255)
            unsigned char b;  //blue  component (0-255)
            unsigned char a;  //alpha (opacity) component (0-255)
        } Color;

        #define MAROON (Color){ 190, 33, 55, 255 }
        */
        DrawCircle(ballPosition.x, ballPosition.y, 50, MAROON);

        EndDrawing();

    }

}
