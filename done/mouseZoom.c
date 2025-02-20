#include "raylib.h"	 /*InitWindow();*/
#include "raymath.h" /*Vector2Add();*/

int main() {

    const int screenWidth = 1000, screenHeight = 500;
    InitWindow(screenWidth, screenHeight, "mouse zoom - Wildan Rhomad Wijanarko");
    SetTargetFPS(60);
    /*
    typedef struct Camera2D {
		Vector2 offset;	camera offset (displacement from target in screen-space)
		Vector2 target;	camera target (focus point in world-space)
		float rotation;	camera rotation in degrees
		float zoom;	camera zoom (scaling), should not be 0
    } Camera2D;
	*/
    Camera2D camera;
	/*must be initialize (Vector2) or error: expected expression before ‘{’ token*/
	camera.offset	= (Vector2){0, 0};
	camera.target	= (Vector2){1, 1};
	camera.rotation = 1;
	camera.zoom		= 1;
    SetTargetFPS(60);

    while(!WindowShouldClose()) {

		/*typedef enum {KEY_ONE = 49; key: 1} KeyboardKey*/
	
		/*Vector2 GetMouseDelta(void); get mouse delta between frames*/
		Vector2 delta = GetMouseDelta();
		/*
		scale vector (multiply by value)
		RMAPI Vector2 Vector2Scale(Vector2 v, float scale) {
			Vector2 result = {v.x * scale, v.y * scale}; return result;
		}
		*/
		delta = Vector2Scale(delta, -1 / camera.zoom);

		/*
		RMAPI Vector2 Vector2Add(Vector2 v1, Vector2 v2) {
			Vector2 result = { v1.x + v2.x, v1.y + v2.y };
			return result;
		    Vector2 result = {v.x*scale, v.y*scale}; return result;
		}
		*/
		camera.target = Vector2Add(camera.target, delta);
		GetMouseWheelMove();
		/*
		Vector2 GetScreenToWorld2D(Vector2 position, Camera2D camera);
		get the world space position for a 2d camera screen space position
		*/
		Vector2 mouseWorldPos = GetScreenToWorld2D(GetMousePosition(), camera);
		camera.offset = GetMousePosition();

		/*start drawing*/
		BeginDrawing();
		BeginMode2D(camera);
	
		/*draw the 3D grid, rotated 90 degrees and centered around 0,0*/
	
		DrawCircle(GetScreenWidth() / 2, GetScreenHeight() / 2, 50, MAROON);
		EndMode2D();
	    EndDrawing();

    }

}
