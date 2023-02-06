#include "raylib.h"
#include "BaseCharacter.h"

class Character : public BaseCharacter
{
public:
    Character(int windWith, int winHeight);
    void tick(float deltaTime);

private:

};