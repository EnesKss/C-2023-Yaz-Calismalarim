#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char dizi[100];
    char eleme;
    char *can;

    printf("Lutfen bir karakter dizisi girin\n");
    gets(dizi);
    printf("Karakter dizisinden cýkarmak istediginiz karakter nedir :");
    scanf("%c",&eleme);

    can=dizi;
    for(can=dizi;*can;can++)
    {
        if(*can==eleme)
        {
            strcpy(can,can+1);
        }
    }


    printf("Eleme yapildiktan sonra karakter dizimizin son hali :%s ",dizi);
    return 0;
}
