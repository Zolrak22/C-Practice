#include "Character.h"
#include "raymath.h"

Character::Character(int windWidth, int winHeight)
{
    width = texture.width / maxFrames;
    height = texture.height;

    screenPos = {static_cast<float>(windWidth) / 2.0f - scale * (0.5f * width),
                 static_cast<float>(winHeight) / 2.0f - scale * (0.5f * height),
                };
}

void Character::tick(float deltaTime)
{
    BaseCharacter::tick(deltaTime);
    
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
}