#include "Character.h"
#include "raymath.h"

Character::Character()
{
    width = texture.width / maxFrames;
    height = texture.height;
}

void Character::setScreenPos(int windWidth, int winHeight)
{
    screenPos = {
        (float)windWidth / 2.0f - 8.0f * (0.5f * width),
        (float)winHeight / 2.0f - 8.0f * (0.5f * height),
    };
}

void Character::tick(float deltaTime)
{
    worldPosLastFrame = worldPos;
    // character input
    Vector2 direction{};
    if (IsKeyDown(KEY_A))
        direction.x -= 1.0;
    if (IsKeyDown(KEY_D))
        direction.x += 1.0;
    if (IsKeyDown(KEY_W))
        direction.y -= 1.0;
    if (IsKeyDown(KEY_S))
        direction.y += 1.0;
    if (Vector2Length(direction) != 0.0)
    {
        // set worldPos = worldPos + direction
        worldPos = Vector2Add(worldPos, Vector2Scale(Vector2Normalize(direction), speed));
        // allows the knight to face the correction direction and sets his animation to run if it moves
        direction.x < 0.0f ? rightLeft = -1.0f : rightLeft = 1.0f;
        texture = run;
    }

    else
    {
        texture = idle;
    }

    // update animation frame
    runningTime += deltaTime;
    if (runningTime >= updateTime)
    {
        frame++;
        runningTime = 0.0f;
        if (frame > maxFrames)
            frame = 0;
    }

    // draw the character
    Rectangle source{frame * width, 0.f, rightLeft * width, height},
        dest{(float)screenPos.x, (float)screenPos.y, 8.0f * width, 8.0f * height};
    DrawTexturePro(texture, source, dest, Vector2{}, 0.0f, WHITE);
}

void Character::undoMovement()
{
    worldPos = worldPosLastFrame;
}