#include "raylib.h"
#include "raymath.h"


int main() {

    const int screenWidth = 1000, screenHeight = 500;
    Vector2 mousePosWorld;
    float triangleRotation;
    Camera2D MyCamera;
    Vector2 mouseWorld;
    InitWindow(screenWidth, screenHeight, "Camera2D shake - Wildan Rhomad Wijanarko");

    while(!WindowShouldClose()) {

	/*
	Vector2 GetScreenToWorld2D(Vector2 position, Camera2D camera);
	get the world space position for a 2D camera screen space position
	*/

	/*
	Vector2 Vector2Subtract(Vector2 v1, Vector2 v2); subtract two vectors (v1 - v2)

	RMAPI Vector2 Vector2Zero(void) {Vector2 result = { 0.0f, 0.0f }; return result;}
	Raylib Math API
	*/

	Vector2 lookDirection = Vector2Subtract(Vector2Zero(), mousePosWorld);

	/*
	arctangent takes 2 argument
	atan2(y, x) returns the angle theta from the conversion of
	    rectangular coordinates (x, y) to polar coordinates (r, theta)
	#ifdef __STDC__
	    double __ieee754_atan2(double y, double x)
	#else
	    double __ieee754_atan2(y,x)
	    double  y,x;
	#endif
	#ifndef RAD2DEG #define RAD2DEG (180.0f/PI) #endif radians to degree
	*/
	triangleRotation = atan2(lookDirection.y, lookDirection.x) * RAD2DEG;

	MyCamera.rotation = -triangleRotation;
	BeginMode2D(MyCamera);

	/*
	void DrawPoly(Vector2 center, int sides, float radius, float rotation, Color color);
	Vector2 is a must or error: expected expression before ‘{’ token
	*/
	DrawPoly((Vector2){0,  0}, 3, 1, triangleRotation, WHITE);
	DrawCircle( 2.0,  2.0, 0.5, DARKGRAY);
        DrawCircle( 3.0, -2.0, 0.5, DARKGRAY);
        DrawCircle(-4.0,  1.0, 0.5, DARKGRAY);

        EndDrawing();

    }

}
