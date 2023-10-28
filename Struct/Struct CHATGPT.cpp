#include <stdio.h>


typedef struct {
    char baslik[100];
    char yazar[50];
    int sayfaSayisi;
} Kitap;

int main() {
    Kitap kitap;

    printf("Kitap basligini girin: ");
    gets( kitap.baslik);

    printf("Yazarin adini girin: ");
    gets( kitap.yazar);

    printf("Sayfa sayisini girin: ");
    scanf("%d", &kitap.sayfaSayisi);

    printf("\nGirilen Kitap Bilgileri:\n");
    printf("Baslik: %s\n", kitap.baslik);
    printf("Yazar: %s\n", kitap.yazar);
    printf("Sayfa Sayisi: %d\n", kitap.sayfaSayisi);

    return 0;
}

