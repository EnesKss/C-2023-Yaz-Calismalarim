#include <stdio.h>
#include <stdlib.h>

void teksayilar(int baslangic, int bitis)
{
    if (baslangic % 2 == 1)
    {
        printf("%d\n", baslangic);
    }

    if (baslangic < bitis)
    {
        teksayilar(baslangic + 1, bitis);
    }
}

int main()
{
    int n;
    printf("Lütfen bir sayý giriniz: ");
    scanf("%d", &n);
    teksayilar(1, n);
    return 0;
}

