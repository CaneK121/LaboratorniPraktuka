//В заданій матриці R(9,9) обчислити суму тих елементів, розміщених на
//головній діагоналі і вище неї, які перевищують за величиною всі елементи, що
//розміщені нижче головної діагоналі. Вивести вихідну матрицю, обрані елементи
//та обчислену суму.
#include <math.h>
#include <stdio.h>
int main() {
  int n = 4, m = n, R[n][m], sum = 0, max;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("R[%d][%d]: ", i, j);
      scanf("%d", &R[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  max = R[1][0];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      if (i > j)
        if (R[i][j] > max)
          max = R[i][j];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      if (i <= j)
        if (R[i][j] > max)
          sum += R[i][j];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("%d ", R[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  printf("\nСума: %d\n", sum);
  return 0;
}
