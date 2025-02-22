#include "raylib.h"


int main() {

    const int screenWidth = 1400, screenHeight = 650;
    InitWindow(screenWidth, screenHeight, "CheckCollisionCircle - Wildan Rhomad Wijanarko");
    /*SetTargetFPS(60);*/
	Vector2 circle1 = {200, 300}, circle2 = {400, 300}; float radius1 = 50, radius2 = 75; bool collision;

    while(!WindowShouldClose()) {

		if (IsKeyDown(KEY_LEFT)) circle2.x -= 2;
		ClearBackground(PINK);

		/*void DrawCircle(int centerX, int centerY, float radius, Color color); draw a color-filled circle*/
		DrawCircle(circle1.x, circle1.y, radius1, BLUE);
		DrawCircle(circle2.x, circle2.y, radius2, YELLOW);

		collision = CheckCollisionCircles(circle1, radius1, circle2, radius2);

		if (collision) DrawText("Collision !", 350, 50, 20, DARKGREEN);

        EndDrawing();

    }

}
