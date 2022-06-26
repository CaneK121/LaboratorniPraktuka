//В заданiй матрицi G(5,4) визначити середнє геометричне значення
//додатних елементiв стовпчикiв, що мають парнi iндекси.
//Вивести вихiдну матрицю та  середнi геометричнi значення, оформленi у виглядi
//масиву.
#include <math.h>
#include <stdio.h>
int main() {
  int n = 5, m = 4, G[n][m], tmp = 0;
  float avg = 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("G[%d][%d]: ", i, j);
      scanf("%d", &G[i][j]);
      if ((i + j) % 2 == 0 & G[i][j] > 0) {
        avg *= G[i][j];
        tmp++;
      }
    }
    printf("\n");
  }
  printf("\n");
  avg = pow(avg, 1.0 / tmp);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("\t%d", G[i][j]);
    }
    printf("\n");
  }
  printf("\nСеренє геометричне: %f\n", avg);
  return 0;
}
