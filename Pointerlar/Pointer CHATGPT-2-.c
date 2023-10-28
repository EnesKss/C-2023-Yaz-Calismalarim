#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ad1,*ad2,*ad;  // Ýki tane integer pointer (ad1, ad2) ve bir tane daha pointer (ad) tanýmlanmýþtýr.
    int n=10,p=20;  // Ýki tane integer deðiþken (n, p) tanýmlanmýþtýr.

    ad1=&n;  // ad1 pointer'ý, n deðiþkeninin bellek adresini tutar.
    ad2=&p;  // ad2 pointer'ý, p deðiþkeninin bellek adresini tutar.

    printf("Atamadan önce ad1 degeri %d\n",*ad1);  // ad1 pointer'ý aracýlýðýyla n deðiþkeninin deðeri ekrana yazdýrýlýr.
    printf("%d\n",ad1);  // ad1 pointer'ýnýn bellek adresi ekrana yazdýrýlýr.

    *ad1=*ad2+2;  // ad1 pointer'ý aracýlýðýyla n deðiþkeninin deðeri, ad2 pointer'ý aracýlýðýyla p deðiþkeninin deðerine 2 eklenerek deðiþtirilir.

    printf("Atamami yaptiktan sonra ad1 degeri %d\n",*ad1);  // Atama yapýldýktan sonra ad1 pointer'ý aracýlýðýyla n deðiþkeninin yeni deðeri ekrana yazdýrýlýr.
    printf("%d\n",ad1);  // ad1 pointer'ýnýn bellek adresi ekrana yazdýrýlýr.

    return 0;
}

