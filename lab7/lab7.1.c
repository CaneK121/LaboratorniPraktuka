#include <stdio.h>
int function(int x){
    return 2*x - 10;
}
void search(int arr[]){
    int mult = 1;
    int count = 0;
    for(int i = 0; i < 12; i++){
        if(arr[i] > 0){
            count++;
        }
        if(arr[i] < 0){
            mult *= arr[i];
        }
    }
    printf("Кількість додатніх елементів: %d\nДобуток від'ємних елементів: -%d", count, mult);
}

int main() {
   int arr[12];
   for(int i = 1; i <= 12; i++){
       arr[i] = function(i);
   }
   search(arr);
    return 0;
}