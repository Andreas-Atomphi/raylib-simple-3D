#include "raylib.h"
#include <stdio.h>

int main(void) {
  printf("test");
  InitWindow(800, 600, "Simple 3D");
  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(RAYWHITE);
    EndDrawing();
  }

  CloseWindow();
  return 0;
}
