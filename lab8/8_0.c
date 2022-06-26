#include <stdio.h>
int main() {
  int x = 4, y = 3, r = 6;
  if (x * x + y * y <= r * r)
    printf("Точка попадає в круг\n");
  else
    printf("Точка не попадає в круг\n");
  return 0;
}
