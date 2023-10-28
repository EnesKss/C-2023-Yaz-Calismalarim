#include <stdio.h>
#include <stdlib.h>

void degistir(int *ad1, int *ad2)
{
    int gecici;
    gecici = *ad1;
    *ad1 = *ad2;
    *ad2 = gecici;
}

int main()
{
    int a = 10, b = 20;
    printf("Cagirmadan once %d %d\n", a, b);
    degistir(&a, &b);  // a ve b değişkenlerinin bellek adreslerini geçiriyoruz
    printf("Cagirdiktan sonra %d %d", a, b);

    return 0;
}

