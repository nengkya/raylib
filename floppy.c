#include "raylib.h"

#define FLOPPY_RADIUS 24


typedef struct Floppy {
	Vector2 position;
	int radius;
	Color color;
} Floppy;

static const int screenHeight = 450;
static Floppy floppy = FLOPPY_RADIUS;



void InitGame() {

	floppy.radius   = FLOPPY_RADIUS;
	floppy.position = (Vector2){80, screenHeight / 2 - floppy.radius};






}






int main() {

    const int screenWidth = 1000, screenHeight = 500;
    InitWindow(screenWidth, screenHeight, "Wildan Rhomad Wijanarko");
    /*SetTargetFPS(60);*/
	InitGame();

    while(!WindowShouldClose()) {



        EndDrawing();

    }

}
