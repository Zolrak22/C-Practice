#include "raylib.h"
#include "raymath.h"
#include "Character.h"

int main()
{

    // Window Dimensions
    const int windowDimensions{768};

    // Initialize the window
    InitWindow(windowDimensions, windowDimensions, "Carlo's Top Down");

    // Map texture
    Texture2D map = LoadTexture("nature_tileset/CastleGarden24x24.png");
    // Draw the map
    Vector2 mapPos{0.0, 0.0};
    const float mapScale {4.0f};

    Character knight;
    knight.setScreenPos(windowDimensions,windowDimensions);

    SetTargetFPS(60);
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(WHITE);

        mapPos = Vector2Scale(knight.getWorldPos(), -1.0f);

        // draw the map
        DrawTextureEx(map, mapPos, 0.0, mapScale, WHITE);
        knight.tick(GetFrameTime());
        // check map bounds
        if (knight.getWorldPos().x < 0.0f ||
            knight.getWorldPos().y < 0.0f ||
            knight.getWorldPos().x + windowDimensions > map.width * mapScale ||
            knight.getWorldPos().y + windowDimensions > map.height * mapScale)
        {
            knight.undoMovement();
        };

        EndDrawing();
    }

    UnloadTexture(map);

    CloseWindow();
}