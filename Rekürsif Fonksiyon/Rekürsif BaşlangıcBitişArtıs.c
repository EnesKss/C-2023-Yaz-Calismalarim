#include <stdio.h>
#include <stdlib.h>

    void seriolustur(int bas,int bit,int artis)
    {

        if(bas<=bit)
        {
            printf("%d\n",bas);
            seriolustur(bas+artis,bit,artis);
        }

    }








int main()
{
   /* Klavyeden başlangıç,bitiş ve artış değeri girilen bir serinin elde edilmesini sağlayan
    C programını recursive fonksiyon kullanarak yazınız.
    Örneğin başlangıç 5 bitiş 55 ve artım 7 olan bir seri 5,12,19,26,33,40,47,54 şeklinde olacaktır.*/
    int bas,bit,artis;
    printf("Lutfen bir baslangic degeri girin\n");
    scanf("%d",&bas);
    printf("Lutfen bitis degerini giriniz\n");
    scanf("%d",&bit);
    printf("Lutfen artis degerini giriniz\n");
    scanf("%d",&artis);
    seriolustur(bas,bit,artis);

    return 0;
}




