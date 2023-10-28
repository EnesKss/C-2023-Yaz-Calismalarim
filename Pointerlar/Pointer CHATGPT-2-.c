#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ad1,*ad2,*ad;  // �ki tane integer pointer (ad1, ad2) ve bir tane daha pointer (ad) tan�mlanm��t�r.
    int n=10,p=20;  // �ki tane integer de�i�ken (n, p) tan�mlanm��t�r.

    ad1=&n;  // ad1 pointer'�, n de�i�keninin bellek adresini tutar.
    ad2=&p;  // ad2 pointer'�, p de�i�keninin bellek adresini tutar.

    printf("Atamadan �nce ad1 degeri %d\n",*ad1);  // ad1 pointer'� arac�l���yla n de�i�keninin de�eri ekrana yazd�r�l�r.
    printf("%d\n",ad1);  // ad1 pointer'�n�n bellek adresi ekrana yazd�r�l�r.

    *ad1=*ad2+2;  // ad1 pointer'� arac�l���yla n de�i�keninin de�eri, ad2 pointer'� arac�l���yla p de�i�keninin de�erine 2 eklenerek de�i�tirilir.

    printf("Atamami yaptiktan sonra ad1 degeri %d\n",*ad1);  // Atama yap�ld�ktan sonra ad1 pointer'� arac�l���yla n de�i�keninin yeni de�eri ekrana yazd�r�l�r.
    printf("%d\n",ad1);  // ad1 pointer'�n�n bellek adresi ekrana yazd�r�l�r.

    return 0;
}

