#include <stdio.h>

int main() {
  int even = 0, odd = 1;
  int arr[];
  int n = sizeof(arr) / sizeof(arr[0]);
  for (int i = 0; i < n; i++)
    if (i % 2 == 0)
      even += arr[i];
    else
      odd *= arr[i];
  printf("Сума: %d\nДобуток: %d\n", even, odd);
  return 0;
}