#include "raylib.h"


int main() {

    const int screenWidth = 1000, screenHeight = 500;

    typedef struct Camera2D {
	Vector2 offset;	/*camera offset (displacement from target in screen-space)*/
	Vector2 target;	/*camera target (focus point in world-space)*/
	float rotation;	/*camera rotation in degrees*/
	float zoom;	/*camera zoom (scaling), should not be 0*/
    } Camera2D;





    InitWindow(screenWidth, screenHeight, "Wildan Rhomad Wijanarko");

    while(!WindowShouldClose()) {



        EndDrawing();

    }

}
