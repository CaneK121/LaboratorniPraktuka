//В заданiй матрицi K(3,6) пiдрахувати кiлькiсть вiд'ємних елементiв. Вивести
//вихiдну матрицю та кiлькiсть вiд'ємних елементiв.
#include <stdio.h>
int main() {
  int n = 3, m = 6, K[n][m], tmp = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("K[%d][%d]: ", i, j);
      scanf("%d", &K[i][j]);
      if (K[i][j] < 0)
        tmp++;
    }
    printf("\n");
  }
  printf("\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("\t%d", K[i][j]);
    }
    printf("\n");
  }
  printf("\nВідємних елементів: %d\n", tmp);
  return 0;
}
