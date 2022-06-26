#include <stdio.h>
void sort(int n, int A[]) {
  int i, j, m;
  for (i = 0; i < (n - 1); i++) {
    m = i;
    for (j = i + 1; j < (n); j++)
      if (A[m] > A[j])
        m = j;
    int temp = A[i];
    A[i] = A[m];
    A[m] = temp;
  }
}
void scan(int n, int A[]) {
  for (int i = 0; i < n; i++) {
    printf("A[%d] ", i);
    scanf("%d", &A[i]);
  }
  printf("\n");
}
void print(int n, int A[]) {
  for (int i = 0; i < n; i++)
    printf("%d ", A[i]);
  printf("\n");
}
int main() {
  int n = 10, A[n], sum1, sum2;
  scan(n, A);
  print(n, A);
  sort(n, A);
  print(n, A);
  for (int i = 0; i < 5; i++)
    sum1 += A[i];
  for (int i = i; i < n; i++)
    sum2 += A[i];
  printf("%d\t/ %d\t= %f\n", sum1, sum2, 1.0 * sum1 / sum2);
  return 0;
}