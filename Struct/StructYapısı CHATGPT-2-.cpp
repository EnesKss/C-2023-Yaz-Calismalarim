#include <stdio.h>

struct Urun {
    int urunKodu;
    char urunAdi[50];
    float fiyat;
};

void kataloguGoster(struct Urun urunler[], int urunSayisi) {
    printf("�r�n Katalo�u:\n");
    for (int i = 0; i < urunSayisi; i++) {
        printf("�r�n Kodu: %d\n", urunler[i].urunKodu);
        printf("�r�n Ad�: %s\n", urunler[i].urunAdi);
        printf("Fiyat: %.2f\n", urunler[i].fiyat);
        printf("---------------------------\n");
    }
}

int main() {
    int urunSayisi;

    printf("Ka� adet �r�n gireceksiniz? ");
    scanf("%d", &urunSayisi);

    struct Urun urunler[urunSayisi];

    for (int i = 0; i < urunSayisi; i++) {
        printf("\n%d. �r�n Bilgileri:\n", i + 1);
        printf("�r�n Kodu: ");
        scanf("%d", &urunler[i].urunKodu);

        printf("�r�n Ad�: ");
        scanf("%s", urunler[i].urunAdi);

        printf("Fiyat: ");
        scanf("%f", &urunler[i].fiyat);
    }

    // Katalogu g�ster
    kataloguGoster(urunler, urunSayisi);

    return 0;
}

