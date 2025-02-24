#include <raylib.h>
#define PLAYER_MAX_LIFE 5
typedef struct Player {Vector2 position; Vector2 size; int life;} Player;





static const int screenWidth  = 1350;
static const int screenHeight =  650;
static Player player;


void InitGame() {

	player.position = (Vector2){ screenWidth /  2, screenHeight * 7 / 8};
    player.size		= (Vector2){ screenWidth / 10, 20};
    player.life		= PLAYER_MAX_LIFE;



}


void UpdateGame() {





}


void DrawGame() {

	DrawRectangle(player.position.x - player.size.x / 2, player.position.y - player.size.y / 2, player.size.x, player.size.y, YELLOW);


	EndDrawing();

}


void UpdateDrawFrame() {
    UpdateGame();
    DrawGame();
}





int main() {

	InitWindow(screenWidth, screenHeight, "Arkanoid - Wildan Rhomad Wijanarko");
	SetTargetFPS(60);

	InitGame();

    while (!WindowShouldClose()) {
        UpdateDrawFrame();
    }

    return 0;


}
