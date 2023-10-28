#include <stdio.h>

struct Urun {
    int urunKodu;
    char urunAdi[50];
    float fiyat;
};

void kataloguGoster(struct Urun urunler[], int urunSayisi) {
    printf("Ürün Kataloðu:\n");
    for (int i = 0; i < urunSayisi; i++) {
        printf("Ürün Kodu: %d\n", urunler[i].urunKodu);
        printf("Ürün Adý: %s\n", urunler[i].urunAdi);
        printf("Fiyat: %.2f\n", urunler[i].fiyat);
        printf("---------------------------\n");
    }
}

int main() {
    int urunSayisi;

    printf("Kaç adet ürün gireceksiniz? ");
    scanf("%d", &urunSayisi);

    struct Urun urunler[urunSayisi];

    for (int i = 0; i < urunSayisi; i++) {
        printf("\n%d. Ürün Bilgileri:\n", i + 1);
        printf("Ürün Kodu: ");
        scanf("%d", &urunler[i].urunKodu);

        printf("Ürün Adý: ");
        scanf("%s", urunler[i].urunAdi);

        printf("Fiyat: ");
        scanf("%f", &urunler[i].fiyat);
    }

    // Katalogu göster
    kataloguGoster(urunler, urunSayisi);

    return 0;
}

