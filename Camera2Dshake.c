#include "raylib.h"


int main() {

    const int screenWidth = 1000, screenHeight = 500;
    InitWindow(screenWidth, screenHeight, "Camera2D shake - Wildan Rhomad Wijanarko");
	Camera2D MyCamera;
	/*
	RMAPI Vector2 Vector2Zero(void) {Vector2 result = { 0.0f, 0.0f }; return result;}
	Raylib Math API
	*/
	Vector2 mouseWorld;
	
    while(!WindowShouldClose()) {

		/*Vector2 GetScreenToWorld2D(Vector2 position, Camera2D camera); get the world space position for a 2D camera screen space position*/

		BeginMode2D(MyCamera);

        EndDrawing();

    }

}
