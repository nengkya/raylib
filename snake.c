#include "raylib.h"
#define SQUARE_SIZE 31
#define SNAKE_LENGTH 256

typedef struct Snake {Vector2 position; Vector2 size; Vector2 speed; Color color;} Snake;

typedef struct Food  {Vector2 position; Vector2 size; bool active; Color color;} Food;

static const int screenWidth = 1300, screenHeight = 650;
static Vector2 offset;
static Snake snake[SNAKE_LENGTH];
static int tailCounter = 1;
static Food fruit;

void InitGame() {

	offset.x = screenWidth  % SQUARE_SIZE;
    offset.y = screenHeight % SQUARE_SIZE;

	for (int i = 0; i < SNAKE_LENGTH; i++) {

        snake[i].position = (Vector2){offset.x /2, offset.y / 2};
        snake[i].size	  = (Vector2){SQUARE_SIZE, SQUARE_SIZE};
        snake[i].color	  = DARKBLUE;
    
	}

	fruit.size  = (Vector2){SQUARE_SIZE, SQUARE_SIZE};
    fruit.color = SKYBLUE;



}


void UpdateGame() {



}


void DrawGame() {

	/*
	draw (using gl lines
	void DrawLineV(Vector2 startPosition, Vector2 endPosition, Color color);
	*/
	for (int i = 0; i < screenWidth / SQUARE_SIZE + 1; i++)

		DrawLineV((Vector2){SQUARE_SIZE * i + offset.x / 2, offset.y / 2},
				  (Vector2){SQUARE_SIZE * i + offset.x / 2, screenHeight - offset.y / 2}, LIGHTGRAY);
	
	for (int i = 0; i < screenHeight/SQUARE_SIZE + 1; i++)
		DrawLineV((Vector2){offset.x / 2, SQUARE_SIZE * i + offset.y / 2},
				  (Vector2){screenWidth - offset.x / 2, SQUARE_SIZE * i + offset.y / 2}, LIGHTGRAY);


	for (int i = 0; i < tailCounter; i++)
		DrawRectangleV(snake[i].position, snake[i].size, snake[i].color);

	DrawRectangleV(fruit.position, fruit.size, fruit.color);

}


void UpdateDrawFrame() {
	UpdateGame();
	DrawGame();
}

int main() {
    InitWindow(screenWidth, screenHeight, "Snake - Wildan Rhomad Wijanarko");
    SetTargetFPS(60);
	InitGame();
    while(!WindowShouldClose()) {
		UpdateDrawFrame();
        EndDrawing();
    }
}
