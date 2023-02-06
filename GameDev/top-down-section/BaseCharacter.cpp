#include "BaseCharacter.h"

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
            screenPos.x,
            screenPos.y,
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

    // draw the character
    Rectangle source{frame * width, 0.f, rightLeft * width, height},
        dest{(float)screenPos.x, (float)screenPos.y, scale * width, scale * height};
    DrawTexturePro(texture, source, dest, Vector2{}, 0.0f, WHITE);
}