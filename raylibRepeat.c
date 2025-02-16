#include "raylib.h"


int main() {

    InitWindow(800, 450, "Wildan");

    while(!WindowShouldClose()) {

        ClearBackground(RAYWHITE);
        
        DrawText("Wildan Rhomad Wijanarko Depok", 190, 200, 20, LIGHTGRAY);
        
        EndDrawing(); /*EndDrawing is a must or window wont close*/

    }

}
