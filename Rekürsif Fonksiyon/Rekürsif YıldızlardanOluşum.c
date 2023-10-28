#include <stdio.h>
#include <stdlib.h>

void yildiz(int limit)
{
    int i;
    if(limit==0)
    {
        return 0;
    }
    else{

        for(i=0;i<limit;i++)
        {
            printf(" *");
        }
        printf("\n");
        yildiz(limit-1);
    }

}






int main()
{
   /* Klavyeden girilen bir N sayısından başlayarak aşağı yönde azalacak şekilde ekrana yıldız basan
    C programını recursive fonksiyon yardımıyla yazınız.
    Örnek ekran görüntüsü
    * * * * *
    * * * *
    * * *
    * *
    *
    */
    int ust;
    printf("Lutfen ust sinir yildiz sayisini giriniz\n");
    scanf("%d",&ust);
    printf("\n\n\n");
    yildiz(ust);

    return 0;
}
