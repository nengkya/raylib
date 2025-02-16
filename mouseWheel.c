#include "raylib.h"


int main() {

    const int screenWidth = 1200, screenHeight = 700;
    int boxPositionY = screenHeight / 2 - 40;
    int scrollSpeed  = 4;

    InitWindow(screenWidth, screenHeight, "Wildan Rhomad Wijanarko");

    while(!WindowShouldClose()) {

	/*float GetMouseWheelMove(void);*/
	boxPositionY -= (int)GetMouseWheelMove() * scrollSpeed;

	ClearBackground(PINK);

	/*void DrawRectangle(int posX, int posY, int width, int height, Color color);*/
	DrawRectangle(screenWidth / 2 - 40, boxPositionY, 80, 80, YELLOW);

	DrawText(TextFormat("%03i", boxPositionY), 10, 40, 20, BROWN);


        EndDrawing();

    }

}
