#include "raylib.h"
typedef struct Player {Vector2 position; Vector2 speed; int radius;} Player;
typedef struct Enemy  {Vector2 position; Vector2 speed; int radius; int radiusBounds; bool moveRight;} Enemy;

/*typedef struct Rectangle {
    float x;      X position of the top-left corner
    float y;      Y position of the top-left corner
    float width;
    float height;
} Rectangle;*/
typedef struct Home {Rectangle rectangle; bool active; bool save; Color color;} Home;

static const int screenWidth = 1300, screenHeight = 650;
static Player player; static Enemy enemy; static Home home;


void InitGame() {

	player.position    = (Vector2){50, 50};
	player.radius	   = 20;
	player.speed	   = (Vector2){ 5,  5};
	enemy.position	   = (Vector2){screenWidth - 50, screenHeight / 2};
	enemy.speed		   = (Vector2){ 3,  3};
	enemy.radius	   = 20;
	enemy.radiusBounds = 150;

	home.rectangle.width  = 50;
	home.rectangle.height = 50;
	home.rectangle.x	  = GetRandomValue(0, screenWidth  - home.rectangle.width);
	home.rectangle.y	  = GetRandomValue(0, screenHeight - home.rectangle.height);

}


void UpdateGame() {

/*bool CheckCollisionCircles(Vector2 center1, float radius1, Vector2 center2, float radius2); check collision between two circles*/

	if (IsKeyDown(KEY_RIGHT)) player.position.x += player.speed.x;
	if (IsKeyDown(KEY_LEFT))  player.position.x -= player.speed.x;
	if (IsKeyDown(KEY_UP))	  player.position.y -= player.speed.y;
	if (IsKeyDown(KEY_DOWN))  player.position.y += player.speed.y;

	if (player.position.x > enemy.position.x) enemy.position.x += enemy.speed.x;
	if (player.position.x < enemy.position.x) enemy.position.x -= enemy.speed.x;

	if (player.position.y > enemy.position.y) enemy.position.y += enemy.speed.y;
	if (player.position.y < enemy.position.y) enemy.position.y -= enemy.speed.y;



}


void DrawGame() {

	DrawRectangleLines(home.rectangle.x, home.rectangle.y,
		home.rectangle.width, home.rectangle.height, BLUE);

	DrawCircleLines(enemy.position.x, enemy.position.y, enemy.radiusBounds, RED);

	/*
	draw a color-filled circle (Vector version)
	void DrawCircleV(Vector2 center, float radius, Color color);
	*/
	DrawCircleV( enemy.position,  enemy.radius, MAROON);
	DrawCircleV(player.position, player.radius, GRAY);

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
