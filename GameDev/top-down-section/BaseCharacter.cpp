#include "BaseCharacter.h"
#include "raymath.h"

BaseCharacter::BaseCharacter()
{

}

void BaseCharacter::undoMovement()
{
    worldPos = worldPosLastFrame;
}

    Rectangle BaseCharacter::getCollisionRec()
    {
        return Rectangle{
            getScreenPos().x,
            getScreenPos().y,
            width * scale,
            height * scale
        };
    }
void BaseCharacter::tick(float deltaTime)
{
    worldPosLastFrame = worldPos;

    // update animation frame
    runningTime += deltaTime;
    if (runningTime >= updateTime)
    {
        frame++;
        runningTime = 0.0f;
        if (frame > maxFrames)
            frame = 0;
    }

if (Vector2Length(velocity) != 0.0)
    {
        // set worldPos = worldPos + velocity

        worldPos = Vector2Add(worldPos, Vector2Scale(Vector2Normalize(velocity), speed));
        // allows the knight to face the correction direction and sets his animation to run if it moves
        velocity.x < 0.0f ? rightLeft = -1.0f : rightLeft = 1.0f;
        texture = run;
    }
    else
    {
        texture = idle;
    }
    velocity = {};

    // draw the character
    Rectangle source{frame * width, 0.f, rightLeft * width, height},
        dest{(float)getScreenPos().x, (float)getScreenPos().y, scale * width, scale * height};
    DrawTexturePro(texture, source, dest, Vector2{}, 0.0f, WHITE);
}