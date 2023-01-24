#include "raylib.h"
#include "Boid.h"
#include <vector>


int main()
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "raylib [core] example - 2d camera");

    std::vector<Boid> points;

    points.emplace_back(Vector2{(float)GetRandomValue(0, screenWidth), (float)GetRandomValue(0, screenHeight)});

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        Vector2 mousePosition = GetMousePosition();
        if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            points.emplace_back(mousePosition);
        }

        BeginDrawing();

            ClearBackground(RAYWHITE);
            for (Boid point : points){
                point.draw();
            }
        EndDrawing();
        
    }

    CloseWindow();

    return 0;
}