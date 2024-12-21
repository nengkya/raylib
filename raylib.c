#include "raylib.h"

int main() {

    InitWindow(800, 450, "HaGa");

    while (!WindowShouldClose()) {

	/*void BeginDrawing(void); setup canvas (framebuffer) to start drawing

	  a framebuffer is a portion of a computer's random-access memory (RAM)
	  that stores the data for a video frame, or image, to be displayed on the screen
	*/
	BeginDrawing(); 

	/*void ClearBackground(Color color); set background color (framebuffer clear color)
	  #define RAYWHITE (Color){ 245, 245, 245, 255 }
	*/
	ClearBackground(RAYWHITE);

	/*void ImageDrawText(Image * dst, const char * text, int posX, int posY, int fontSize, Color color);
		    Draw text (using default font) within an image (destination)
	*/
	DrawText("DrawText(190, 200, 20, LIGHTGRAY);", 190, 200, 20, LIGHTGRAY);

	/*void EndDrawing(void); end canvas drawing and swap buffers (double buffering)*/
	EndDrawing();	

    }




}
