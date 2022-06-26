
#include <stdio.h>
int function(int x){
    return 2*x-20;
}
void search(int arr[4][4]){
    int mult = 1;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(i <= 1){
                mult *= arr[i][j];
            }
        }
   }
   printf("\nДобуток елементів перших двох рядків: %d", mult);


}

int main() {
   int a[4][4];
   printf("Початковий масив:\n ");
   for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
        a[i][j] = 2*function(i) + 16*j;
        printf(" %d", a[i][j]);
        }
        printf("\n");
   }
   search(a);
}