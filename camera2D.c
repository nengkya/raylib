#include "raylib.h"


int main() {

    const int screenWidth = 1000, screenHeight = 500;

    /*
    typedef struct Camera2D {
	Vector2 offset;	/*camera offset (displacement from target in screen-space)*/
	Vector2 target;	/*camera target (focus point in world-space)*/
	float rotation;	/*camera rotation in degrees*/
	float zoom;	/*camera zoom (scaling), should not be 0*/
    } Camera2D;
    */
    Camera2D camera;
    camera.target = (Vector2){ 0, 0 }; /*focus on (0,0)*/
    camera.offset = (Vector2){screenWidth / 2, screenHeight / 2 }; /*center on screen*/
    camera.zoom	  = 1.0f;

    InitWindow(screenWidth, screenHeight, "Camera2D zoom - Wildan Rhomad Wijanarko");

    while(!WindowShouldClose()) {

	/*
	float GetMouseWheelMove(void);
	    get mouse wheel movement for X or Y, whichever is larger
	*/
	camera.zoom += GetMouseWheelMove() * 0.1f;

	/*void BeginMode2D(Camera2D camera); begin 2D mode with custom camera 2 dimension*/
	BeginMode2D(camera); /*it is a must or draw error coordinate*/

	DrawLine(-1000, 0, 1000, 0, VIOLET);
        DrawLine(0, -1000, 0, 1000, DARKPURPLE);
        DrawCircle(0, 0, 10, LIME);
		
		/*void EndMode2D(void); ends 2D mode with custom camera*/
        EndDrawing();

    }

}
