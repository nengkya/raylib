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
	Rectangle buildings[MAX_BUILDINGS];
	int spacing = 0;
	/*	
	typedef struct Color {
		unsigned char r;  0-255
		unsigned char g;  0-255
		unsigned char b;  0-255
		unsigned char a;  alpha (opacity) 0 - 255
	} Color;
	*/
	Color buildColors;

    InitWindow(screenWidth, screenHeight, "Camera2D core - Wildan Rhomad Wijanarko");

	for (int i = 0; i < MAX_BUILDINGS; i++) {
		/*int GetRandomValue(int min, int max);*/
		buildings[i].height = GetRandomValue( 50, 200);
		buildings[i].width  = GetRandomValue(100, 800);
		buildings[i].x = -6000 + spacing;
		buildings[i].y = screenHeight - 130 - buildings[i].height;

		spacing += buildings[i].width;

		buildColor[i] = (Color){GetRandomValue(200, 240), GetRandomValue(200, 240), GetRandomValue(200, 250), 255}



		
	}

    while(!WindowShouldClose()) {

	
        EndDrawing();

    }

}
