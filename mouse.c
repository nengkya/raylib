#include "raylib.h"


int main() {

    const int screenWidth = 1600, screenHeight = 900;

    Vector2 ballPosition = {-100.0f, -100.0f};

    Color ballColor = DARKBLUE;

    int isCursorHidden = 0;

    InitWindow(screenWidth, screenHeight, "Wildan Rhomad Wijanarko");

    while(!WindowShouldClose()) {

        /*
        check if a key has been pressed once
        typedef enum {KEY_H 72} KeyboardKey;
        */
        if (IsKeyPressed(KEY_H)) {

            if(0 == IsCursorHidden) {
                HideCursor();
                isCursorHidden = 1;
            }
            else {
                ShowCursor();
                isCursorHidden = 0;
            }

        }

        /*Vector2 GetMousePosition(void);*/
        ballPosition = GetMousePosition();

        /*bool IsMouseButtonPressed(int button);*/
        if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) ballColor = MAROON;

        DrawCircleV(ballPosition, 40, ballColor);

        if (1 == isCursorHidden) DrawText("Wildan Rhomad Wijanarko", 20, 60, 20, RED);
        else DrawText("HaGa IT Solution", 20, 60, 20, LIME);




        EndDrawing();

    }

}
