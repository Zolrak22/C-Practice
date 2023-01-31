#include "raylib.h"
#include "raymath.h"

int main()
{

    // Window Dimensions
    const int windowDimensions{768};

    // Initialize the window
    InitWindow(windowDimensions,windowDimensions,"Carlo's Top Down");

    // Map texture
    Texture2D map = LoadTexture("nature_tileset/CastleGarden24x24.png");
    //Draw the map
    Vector2 mapPos{0.0, 0.0};
    // character speed
    float speed {6};

    Texture2D knight_idle = LoadTexture("characters/knight_idle_spritesheet.png");
    Texture2D knight_run = LoadTexture("characters/knight_run_spritesheet.png");
    Texture2D knight = LoadTexture("characters/knight_idle_spritesheet.png");
    Vector2 knightPos
    {
        (float)windowDimensions/2.0f - 8.0f * (0.5f * (float)knight.width/6.0f),
        (float)windowDimensions/2.0f - 8.0f * (0.5f * (float)knight.height),

    };
    // 1: facing right, -1: facing left
    float rightLeft{1.0f};
    // animation variables
    float runningTime{};
    int frame{};
    const int maxFrames{6};
    const float updateTime{1.0f/12.0f};


    SetTargetFPS(60);
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(WHITE);

        // character directional movement
        Vector2 direction{};
        if (IsKeyDown(KEY_A)) direction.x -= 1.0;
        if (IsKeyDown(KEY_D)) direction.x += 1.0;
        if (IsKeyDown(KEY_W)) direction.y -= 1.0;
        if (IsKeyDown(KEY_S)) direction.y += 1.0;
        if (Vector2Length(direction) != 0.0)
        {
            // set mapPos = mapPos - direction            
            mapPos = Vector2Subtract(mapPos,Vector2Scale(Vector2Normalize(direction),speed));
            direction.x < 0.0f ? rightLeft = -1.0f : rightLeft = 1.0f;
            knight = knight_run;
        }

        else
        {
            knight = knight_idle;
        }
        // draw the map
        DrawTextureEx( map, mapPos, 0.0, 4.0, WHITE);

        // update animation frame
        runningTime += GetFrameTime();
        if (runningTime >= updateTime)
        {
            frame++;
            runningTime = 0.0f;
            if (frame > maxFrames) frame = 0;
        }

        // draw the character
        Rectangle source{frame * (float)knight.width/6.0f, 0.f,rightLeft * (float)knight.width/6.0f, (float)knight.height },
        dest{(float)knightPos.x, (float)knightPos.y, 8.0f * (float)knight.width/6.0f, 8.0f * (float)knight.height};
        DrawTexturePro(knight,source, dest, Vector2{}, 0.0f, WHITE );

        EndDrawing();
    }
    
    UnloadTexture(map);
    UnloadTexture(knight);

    CloseWindow();

}