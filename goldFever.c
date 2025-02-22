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

static const int screenWidth = 1440, screenHeight = 650;
static Player player; static Enemy enemy; static Home home;


void InitGame() {

	player.position    = (Vector2){50, 50};
	player.radius	   = 20;
	player.speed	   = (Vector2){ 5,  5};
	enemy.position	   = (Vector2){screenWidth - 50, screenHeight / 2};
	enemy.speed		   = (Vector2){ 3,  3};
	enemy.radius	   = 20;
	enemy.radiusBounds = 150;




}


void UpdateGame() {

/*bool CheckCollisionCircles(Vector2 center1, float radius1, Vector2 center2, float radius2); check collision between two circles*/

	if (IsKeyDown(KEY_RIGHT)) player.position.x += player.speed.x;
	if (IsKeyDown(KEY_LEFT))  player.position.x -= player.speed.x;
	if (IsKeyDown(KEY_UP))	  player.position.y -= player.speed.y;
	if (IsKeyDown(KEY_DOWN))  player.position.y += player.speed.y;





}


void DrawGame() {








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
