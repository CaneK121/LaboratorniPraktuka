#include <stdio.h>
#include <stdlib.h>
void func(float x, float y){
    if(x>0 && y>0){
        printf("Точка знаходиться у першій координатній чверті.\n");
    } else if (x<0 && y>0){
        printf("Точка знаходиться у другій координатній чверті.\n");
    }else if (x>0 && y<0){
        printf("Точка знаходиться у третій координатній чверті.\n");
    }else if (x<0 && y<0){
        printf("Точка знаходиться у четвертій координатній чверті.\n");
    }
}
struct point{
    float x;
    float y;
};
int main(){
    int n;
    printf("Введіть кількість точок:");
    scanf("%d",&n);
    struct point a[n];
    for ( int i=0; i<n; i++){
        printf("X: ");
        scanf("%f",&a[i].x);
        printf("Y: ");
        scanf("%f",&a[i].y);
        func(a[i].x, a[i].y);
        printf("\n");
    }
    
    return 0;
}