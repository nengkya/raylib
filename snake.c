#include "raylib.h"
#define SQUARE_SIZE 31

/*typedef struct Rectangle {
    float x;      X position of the top-left corner
    float y;      Y position of the top-left corner
    float width;
    float height;
} Rectangle;*/

static const int screenWidth = 1300, screenHeight = 650;
static Vector2 offset;

void InitGame() {

	offset.x = screenWidth  % SQUARE_SIZE;
    offset.y = screenHeight % SQUARE_SIZE;


}


void UpdateGame() {

/*
bool CheckCollisionCircles(Vector2 center1, float radius1,
	Vector2 center2, float radius2); check collision between two circles
*/


}


void DrawGame() {

	/*
	draw (using gl lines
	void DrawLineV(Vector2 startPosition, Vector2 endPosition, Color color);
	*/
	for (int i = 0; i < screenWidth / SQUARE_SIZE + 1; i++) {

		DrawLineV((Vector2){SQUARE_SIZE * i + offset.x/2, offset.y/2},
				  (Vector2){SQUARE_SIZE * i + offset.x/2, screenHeight - offset.y / 2}, LIGHTGRAY);
	
	}

	for (int i = 0; i < screenHeight / SQUARE_SIZE + 1; i++) {

		DrawLineV((Vector2){offset.x / 2, SQUARE_SIZE*i + offset.y / 2},
				  (Vector2){screenWidth - offset.x / 2, SQUARE_SIZE*i + offset.y / 2}, LIGHTGRAY);

	}

}


void UpdateDrawFrame() {
	UpdateGame();
	DrawGame();
}

int main() {
    InitWindow(screenWidth, screenHeight, "Gold Fever Classic - Wildan Rhomad Wijanarko");
    SetTargetFPS(60);
	InitGame();
    while(!WindowShouldClose()) {
		UpdateDrawFrame();
        EndDrawing();
    }
}
