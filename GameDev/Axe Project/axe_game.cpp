#include "raylib.h"
int main()
{
    // window dimensions
    int  width{800}, 
         height{450}, 
         circle_radius{25};

    InitWindow(width,height,"Carlos' Window");
    
    // circle coordinates
    int  circle_x{200},
         circle_y(100),
         circle_speed{10};
    
    // circle edges
    int  left_circle_x{circle_x - circle_radius}, 
         right_circle_x{circle_x + circle_radius},
         upper_circle_y{circle_y - circle_radius},
         lower_circle_y{circle_y + circle_radius};

    // axe coordinates
    int axe_x{400}, axe_y{0}, axe_length{50};
    int axe_direction{10};

    // axe edges
    int  left_axe_x{axe_x},
         right_axe_x{axe_x + axe_length},
         upper_axe_y{axe_y},
         lower_axe_y{axe_y + axe_length};

    bool collision_with_axe =
                         (lower_axe_y >= upper_circle_y) && 
                         (upper_axe_y <= lower_circle_y) && 
                         (right_axe_x >= left_circle_x) &&
                         (left_axe_x <= right_circle_x);

    SetTargetFPS(60);
    while(!WindowShouldClose())
    {
     BeginDrawing();
     ClearBackground(WHITE);

     if (collision_with_axe)
      {
      DrawText("Game Over!", 400, 200, 20, RED);
      }
     else
     {
         // Game Logic begins

         //update the edges
         left_circle_x = circle_x - circle_radius;
         right_circle_x = circle_x + circle_radius;
         upper_circle_y = circle_y - circle_radius;
         lower_circle_y = circle_y + circle_radius;
         left_axe_x =  axe_x;
         right_axe_x = axe_x + axe_length;
         upper_axe_y = axe_y;
         lower_axe_y = axe_y + axe_length;

         //update collision_with_axe
         collision_with_axe =
                         (lower_axe_y >= upper_circle_y) && 
                         (upper_axe_y <= lower_circle_y) && 
                         (right_axe_x >= left_circle_x) &&
                         (left_axe_x <= right_circle_x);

      DrawCircle(circle_x, circle_y, circle_radius, BLUE);
      DrawRectangle(axe_x, axe_y, axe_length, axe_length, RED);
      

      //move the axe
      axe_y += axe_direction;
      if (axe_y > height || axe_y < 0)
      {
         axe_direction = -axe_direction;
      }

      if (IsKeyDown(KEY_D) && circle_x < width)
      {
         circle_x += circle_speed;
      }

      if (IsKeyDown(KEY_A) && circle_x > 0)
      {
         circle_x -= circle_speed;
      }

      if (IsKeyDown(KEY_S) && circle_y < height)
      {
         circle_y += circle_speed;
      }

      if (IsKeyDown(KEY_W) && circle_y > 0)
      {
         circle_y -= circle_speed;
      }

      // Game Logic ends

     }

     EndDrawing();
    }

}