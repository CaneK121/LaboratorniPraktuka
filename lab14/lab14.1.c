#include <stdio.h>  
#include <string.h>
void search(char text[]) {
    char* istr;
    istr = strtok(text, " ");
    while (istr != NULL)
    {
        if (strchr(istr, 'l')-istr+1 == 1 || strchr(istr, 'k')-istr+1 == 1 || strchr(istr, 'r')-istr+1 == 1 ||
        strchr(istr, 's')-istr+1 == 1 || strchr(istr, 'j')-istr+1 == 1) {
            printf("%s ", istr);
        }
        istr = strtok(NULL, " ");
    }
    printf("\n");
}
int main()
{
    char str1[24] = "king";
    char str2[24] = "son";
    char str3[24] = "ya liubliu tebe";
    
    printf("Слова в першому рядку:\n");
    search(str1);
    printf("Слова в другому рядку:\n");
    search(str2);
    printf("Слова в третьому рядку:\n");
    search(str3);

    return 0;
}