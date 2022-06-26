//Дано дійсну матрицю А розмірності nxn.
//Замінити кожен елемент рядка,
//де знаходиться максимальний елемент
//сумою елементів бічної діагоналі.
#include <math.h>
#include <stdio.h>
int main() {
  int n = 3, m = n, A[n][m], sum = 0, max;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("A[%d][%d]: ", i, j);
      scanf("%d", &A[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  max = A[0][0];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      if (i + j == n - 1)
        sum += A[i][j];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      if (i > j)
        if (A[i][j] > max)
          max = A[i][j];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      if (A[i][j] == max)
        for (j = 0; j < m; j++)
          A[i][j] = sum;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("%d ", A[i][j]);
    }
    printf("\n");
  }
  return 0;
}
