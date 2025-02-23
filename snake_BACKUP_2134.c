#include "raylib.h"
#define SQUARE_SIZE 31
#define SNAKE_LENGTH 256

<<<<<<< HEAD
=======
typedef struct Snake {Vector2 position; Vector2 size; Vector2 speed; Color color;} Snake;

>>>>>>> 45e308c5ca6824e768eb94ad1e078c1954d19987
static const int screenWidth = 1300, screenHeight = 650;
static Vector2 offset;
static Snake snake[SNAKE_LENGTH];
static int tailCounter = 1;

void InitGame() {

	offset.x = screenWidth  % SQUARE_SIZE;
    offset.y = screenHeight % SQUARE_SIZE;

	for (int i = 0; i < SNAKE_LENGTH; i++) {

        snake[i].position = (Vector2){offset.x /2, offset.y / 2};
        snake[i].size	  = (Vector2){SQUARE_SIZE, SQUARE_SIZE};
        snake[i].color	  = DARKBLUE;
    
	}

}


void UpdateGame() {

/*
bool CheckCollisionCircles(Vector2 center1, float radius1,
	Vector2 center2, float radius2); check collision between two circles
*/


}


void DrawGame() {

<<<<<<< HEAD
	/*
	draw (using gl lines
	void DrawLineV(Vector2 startPosition, Vector2 endPosition, Color color);
	*/
	for (int i = 0; i < screenWidth / SQUARE_SIZE + 1; i++) {

		DrawLineV((Vector2){SQUARE_SIZE * i + offset.x/2, offset.y/2},
				  (Vector2){SQUARE_SIZE * i + offset.x/2, screenHeight - offset.y / 2}, LIGHTGRAY);
	
	}
=======
	/*void DrawLineV(Vector2 startPosition, Vector2 endPosition, Color color); draw a line (using gl lines)*/
	for (int i = 0; i < screenWidth / SQUARE_SIZE + 1; i++)

		DrawLineV((Vector2){SQUARE_SIZE * i + offset.x/2, offset.y/2}, (Vector2){SQUARE_SIZE * i + offset.x/2, screenHeight - offset.y / 2}, LIGHTGRAY);
>>>>>>> 45e308c5ca6824e768eb94ad1e078c1954d19987

	for (int i = 0; i < screenHeight / SQUARE_SIZE + 1; i++)

		DrawLineV((Vector2){offset.x / 2, SQUARE_SIZE*i + offset.y / 2},
				  (Vector2){screenWidth - offset.x / 2, SQUARE_SIZE*i + offset.y / 2}, LIGHTGRAY);

	for (int i = 0; i < tailCounter; i++) DrawRectangleV(snake[i].position, snake[i].size, snake[i].color);



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
