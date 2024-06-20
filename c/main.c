#include <stdio.h>
#include "include\raylib.h"

int main(void)
{
    InitWindow(800, 450, "raylib [core] example - basic window");

    float x = 400;
    float y = 225;

    while (!WindowShouldClose())
    {
        float deltaTime = GetFrameTime();
        x += deltaTime*100;
        BeginDrawing();
            ClearBackground(RAYWHITE);
            //DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

            DrawCircle((int)x,(int)y,50,BLUE);
        EndDrawing();
    }

    CloseWindow();



    return 1;




}