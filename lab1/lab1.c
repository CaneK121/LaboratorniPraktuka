#include <stdio.h>

int main()
{
    float x, y;

    printf("\nВведіть координату Х : ");
    scanf("%f", &x);
    printf("Введіть координату Y : ");
    scanf("%f", &y);

    if (y >= -1 && y <= 1){
        if(x >= -3 && x <= -1 && x <= y){
            printf("Належить");
        }
        else if(x >= -1 && x <= 0 && x >= y){
            printf("Належить");
        }else printf("Не належить");
    }
    else printf("Не належить");
        

    return 0;
}
