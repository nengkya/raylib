#include "raylib.h"
#define MAX_BUILDINGS 100


int main() {

    const int screenWidth = 1000, screenHeight = 500;
	/*
	typedef struct Rectangle {
		float x;
		float y;
		float width;
		float height;
	} Rectangle;
	*/
	Rectangle player = {400, 280, 40, 40}, buildings[MAX_BUILDINGS];
	int spacing = 0;
	/*	
	typedef struct Color {
		unsigned char r;  0-255
		unsigned char g;  0-255
		unsigned char b;  0-255
		unsigned char a;  alpha (opacity) 0 - 255
	} Color;
	*/
	Color buildColors[MAX_BUILDINGS];
	/*
    typedef struct Camera2D {
		Vector2 offset;	camera offset (displacement from target in screen-space)
		Vector2 target;	camera target (focus point in world-space)
		float rotation;	camera rotation in degrees
		float zoom;	camera zoom (scaling), should not be 0
    } Camera2D;
    */
	Camera2D camera;

    InitWindow(screenWidth, screenHeight, "Camera2D core - Wildan Rhomad Wijanarko");

	for (int i = 0; i < MAX_BUILDINGS; i++) {
		/*int GetRandomValue(int min, int max);*/
		buildings[i].height = GetRandomValue( 50, 200);
		buildings[i].width  = GetRandomValue(100, 800);
		buildings[i].x = -6000 + spacing;
		buildings[i].y = screenHeight - 130 - buildings[i].height;

		spacing += buildings[i].width;

		buildColors[i] = (Color){GetRandomValue(200, 240), GetRandomValue(200, 240), GetRandomValue(200, 250), 255};
	}

	/*(Vector2) is a must or error on expression*/
	camera.target = (Vector2){player.x + 20.0f, player.y + 20.0f }; /*focus on*/ 
	camera.offset = (Vector2){screenWidth / 2.0f, screenHeight / 2.0f}; /*center on screen*/

	SetTargetFPS(60);

    while(!WindowShouldClose()) {

		if (IsKeyDown(KEY_RIGHT)) player.x += 2;
	
        EndDrawing();

    }

}
