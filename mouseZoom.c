#include "raylib.h"	 /*InitWindow();*/
#include "raymath.h" /*Vector2Add();*/

int main() {

    const int screenWidth = 1000, screenHeight = 500;
    InitWindow(screenWidth, screenHeight, "mouse zoom - Wildan Rhomad Wijanarko");
    SetTargetFPS(60);
    Camera2D camera;
    SetTargetFPS(60);

    while(!WindowShouldClose()) {

		/*typedef enum {KEY_ONE = 49; key: 1} KeyboardKey*/
<<<<<<< HEAD

=======
	
>>>>>>> 77b4831c3dc8e79270b967c823a856e435a45194
		/*Vector2 GetMouseDelta(void); get mouse delta between frames*/
		Vector2 delta = GetMouseDelta();
		/*
		scale vector (multiply by value)
		RMAPI Vector2 Vector2Scale(Vector2 v, float scale) {
<<<<<<< HEAD
			Vector2 result = {v.x*scale, v.y*scale}; return result;
		}
		*/
		delta = Vector2Scale(delta, -1 / camera.zoom);

		/*
		RMAPI Vector2 Vector2Add(Vector2 v1, Vector2 v2) {
			Vector2 result = { v1.x + v2.x, v1.y + v2.y };
			return result;
=======
		    Vector2 result = {v.x*scale, v.y*scale}; return result;
		}
		*/
		delta = Vector2Scale(delta, -1 / camera.zoom);
	
		/*
		RMAPI Vector2 Vector2Add(Vector2 v1, Vector2 v2) {
		    Vector2 result = { v1.x + v2.x, v1.y + v2.y };
		    return result;
>>>>>>> 77b4831c3dc8e79270b967c823a856e435a45194
		}
		*/
		camera.target = Vector2Add(camera.target, delta);
		GetMouseWheelMove();
		/*
		Vector2 GetScreenToWorld2D(Vector2 position, Camera2D camera);
		get the world space position for a 2d camera screen space position
		*/
		Vector2 GetScreenToWorld2D(GetMousePosition(), camera);
		camera.offset = GetMousePosition();
<<<<<<< HEAD

		/*start drawing*/
		BeginDrawing();
		BeginMode2D(camera);

		/*draw the 3D grid, rotated 90 degrees and centered around 0,0*/

		DrawCircle(GetScreenWidth() / 2, GetScreenHeight() / 2, 50, MAROON);
		EndMode2D();

        EndDrawing();
=======
	
		/*start drawing*/
		BeginDrawing();
		BeginMode2D(camera);
	
		/*draw the 3D grid, rotated 90 degrees and centered around 0,0*/
	
		DrawCircle(GetScreenWidth() / 2, GetScreenHeight() / 2, 50, MAROON);
		EndMode2D();
	
	    EndDrawing();
>>>>>>> 77b4831c3dc8e79270b967c823a856e435a45194

    }

}
