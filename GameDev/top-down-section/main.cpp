#include "raylib.h"
#include "raymath.h"
#include "Character.h"
#include "Prop.h"
#include "Enemy.h"

int main()
{

    // Window Dimensions
    const int windowWith{768};
    const int windowHeight{768};

    // Initialize the window
    InitWindow(windowWith, windowHeight, "Carlo's Top Down");

    // Map texture
    Texture2D map = LoadTexture("nature_tileset/CastleGarden24x24.png");
    // Draw the map
    Vector2 mapPos{0.0, 0.0};
    const float mapScale {4.0f};

    Character knight{windowWith, windowHeight};

    Prop props[2]{
        Prop{Vector2{600.0, 300.0}, LoadTexture("nature_tileset/Sign.png")},
        Prop{Vector2{1000.0, 1000.0}, LoadTexture("nature_tileset/Log.png")}
    };

    Enemy goblin{
        Vector2(),
        LoadTexture("characters/goblin_idle_spritesheet.png"),
        LoadTexture("characters/goblin_run_spritesheet.png")
    };

    SetTargetFPS(60);
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(WHITE);

        mapPos = Vector2Scale(knight.getWorldPos(), -1.0f);

        // draw the map
        DrawTextureEx(map, mapPos, 0.0, mapScale, WHITE);

        // draw the props
        for (auto prop : props)
        {
            prop.Render(knight.getWorldPos());
        }

        knight.tick(GetFrameTime());
        // check map bounds
        if (knight.getWorldPos().x < 0.0f ||
            knight.getWorldPos().y < 0.0f ||
            knight.getWorldPos().x + windowWith > map.width * mapScale ||
            knight.getWorldPos().y + windowHeight > map.height * mapScale)
        {
            knight.undoMovement();
        };

        // check prop collisions
        for (auto prop : props)
        {
            if (CheckCollisionRecs(prop.getCollisionRec(knight.getWorldPos()), knight.getCollisionRec()))
            {
                knight.undoMovement();
            }
        }

        goblin.tick (GetFrameTime());
        
        EndDrawing();
    }

    UnloadTexture(map);

    CloseWindow();
}