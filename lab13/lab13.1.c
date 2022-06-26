#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char line[255];
    int flag = 0;
	FILE * fp;
    if((fp= fopen("data.txt", "r"))==NULL)
    {
        perror("Помилка при зчитуванні файлу data.txt");
        exit(0);
    }
    FILE * fp1;
    if((fp= fopen("data1.txt", "a"))==NULL)
    {
        perror("Помилка при зчитуванні файлу 1data.txt");
        exit(0);
    }
    while((fgets(line, 256, fp))!=NULL)
    {
        for(int i = 256; i>0; i--){
            if(line[i] == "!"){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            fprintf(fp1, line);
        }
        flag = 0;
    }
    
    fclose(fp);
    fclose(fp1););
    return 0;
}