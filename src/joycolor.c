#include "raylib.h"

int main(void)
{
  InitWindow(800, 600, "Joystick Colors");

  Color clearColor = WHITE;

  Color colors[] = { GRAY,
                     DARKGRAY,
                     YELLOW,
                     GOLD,
                     ORANGE,
                     PINK,
                     RED,
                     MAROON,
                     GREEN,
                     LIME,
                     DARKGREEN,
                     SKYBLUE,
                     BLUE,
                     DARKBLUE,
                     PURPLE,
                     VIOLET,
                     DARKPURPLE,
                     BEIGE,
                     BROWN,
                     DARKBROWN,
                     MAGENTA };

  while (!WindowShouldClose())
  {
    for (int i = 0; i < 4; i++)
    {
      if (IsGamepadAvailable(i))
      {
        for (int j = 1; j < 18; j++)
        {
          if (IsGamepadButtonDown(i, j))
          {
            clearColor = colors[j];
          }
        }
      }
    }

    BeginDrawing();
    {
      ClearBackground(clearColor);
    }
    EndDrawing();
  }

  CloseWindow();
  return 0;
}