#include "raylib.h"	 /*InitWindow();*/
#include "raymath.h" /*Vector2Add();*/

int main() {

    const int screenWidth = 1000, screenHeight = 500;
    InitWindow(screenWidth, screenHeight, "mouse zoom - Wildan Rhomad Wijanarko");
<<<<<<< HEAD
    SetTargetFPS(60);
||||||| fbd35fb
	SetTargetFPS(60);
=======
	Camera2D camera;
	SetTargetFPS(60);
>>>>>>> bc204a9716b3e17e1402904d6d1c9b56c31ab958

    while(!WindowShouldClose()) {

<<<<<<< HEAD
	/* typedef enum {KEY_ONE = 49; key: 1} KeyboardKey*/

	/*
	Vector2 GetScreenToWorld2D(Vector2 position, Camera2D camera);
	get the world space position for a 2d camera screen space position
	*/
||||||| fbd35fb
		/* typedef enum {KEY_ONE = 49; key: 1} KeyboardKey*/

		/*Vector2 GetScreenToWorld2D(Vector2 position, Camera2D camera); get the world space position for a 2d camera screen space position*/
=======
		/*typedef enum {KEY_ONE = 49; key: 1} KeyboardKey*/
>>>>>>> bc204a9716b3e17e1402904d6d1c9b56c31ab958

		/*Vector2 GetMouseDelta(void); get mouse delta between frames*/
		Vector2 delta = GetMouseDelta();
		/*
		RMAPI Vector2 Vector2Add(Vector2 v1, Vector2 v2) {
			Vector2 result = { v1.x + v2.x, v1.y + v2.y };
			return result;
		}
		*/
		camera.target = Vector2Add(camera.target, delta);

		camera.offset = GetMousePosition();

		/*Vector2 GetScreenToWorld2D(Vector2 position, Camera2D camera); get the world space position for a 2D camera screen space position*/


		/*start drawing*/
		BeginDrawing();
		BeginMode2D(camera);

		/*draw the 3D grid, rotated 90 degrees and centered around 0,0*/

		DrawCircle(GetScreenWidth() / 2, GetScreenHeight() / 2, 50, MAROON);

        EndDrawing();

    }

}
