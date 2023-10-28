#include <stdio.h>
#include <stdlib.h>

int ikininkuvvetleri(int n)
{
    int deger;
    if (n != 0)
    {
        deger = 2 * ikininkuvvetleri(n - 1);
    }
    else
    {
        deger = 1;
        return deger;
    }
    return deger;
}

int main()
{
    /*Klavyeden girilen bir N tamsayısına kadar 2 nin kuvvetlerinin listelenmesini sağlayan
   C programını recursive fonksiyon kullanarak yazınız
   Örnek Ekran görüntüsü
   1
   2
   4
   8
   şeklinde olacaktır.*/
    int sayi;
    printf("Lutfen bir sayi giriniz\n");
    scanf("%d", &sayi);
    printf("%d ye kadar olan 2 nin kuvvetleri:\n", sayi);
    for (int i = 0; i <= sayi; i++)
    {
        printf("%d\n", ikininkuvvetleri(i));
    }

    return 0;
}
