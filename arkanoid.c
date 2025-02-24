#include <raylib.h>
#define PLAYER_MAX_LIFE  5
#define LINES_OF_BRICKS  5
#define BRICKS_PER_LINE 20
typedef struct Player {Vector2 position; Vector2 size; int life;} Player;
typedef struct Ball	  {Vector2 position; Vector2 speed; int radius; bool active;} Ball;
typedef struct Brick  {Vector2 position; bool active;} Brick;
static const int screenWidth  = 1350;
static const int screenHeight =  650;
static Player player;
static Ball ball;
static Brick brick[LINES_OF_BRICKS][BRICKS_PER_LINE];
static Vector2 brickSize;


void InitGame() {

	player.position = (Vector2){screenWidth / 2, screenHeight * 7 / 8};
    player.size		= (Vector2){ screenWidth / 10, 20};
    player.life		= PLAYER_MAX_LIFE;

	ball.position = (Vector2){player.position.x, player.position.y - player.size.y / 2 - ball.radius };
    ball.radius   = 7;

	brickSize = (Vector2){GetScreenWidth() / BRICKS_PER_LINE, 40 };
	int initialDownPosition = 50;
	
	for (int i = 0; i < LINES_OF_BRICKS; i++) {
        for (int j = 0; j < BRICKS_PER_LINE; j++) {

            brick[i][j].position = (Vector2){j * brickSize.x + brickSize.x / 2,
				i * brickSize.y + initialDownPosition };

            brick[i][j].active = true;

        }
    }

}


void UpdateGame() {





}


void DrawGame() {

	DrawRectangle(player.position.x - player.size.x / 2, player.position.y - player.size.y / 2,
		player.size.x, player.size.y, YELLOW);

	DrawCircleV(ball.position, ball.radius, MAROON);

	for (int i = 0; i < LINES_OF_BRICKS; i++) {
		for (int j = 0; j < BRICKS_PER_LINE; j++) 
		{
			if (brick[i][j].active) {
				
				if ((i + j) % 2 == 0)
					 DrawRectangle(brick[i][j].position.x - brickSize.x/2, brick[i][j].position.y - brickSize.y/2, brickSize.x, brickSize.y, GRAY);
				else DrawRectangle(brick[i][j].position.x - brickSize.x/2, brick[i][j].position.y - brickSize.y/2, brickSize.x, brickSize.y, DARKGRAY);
			}
		}
	}




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
