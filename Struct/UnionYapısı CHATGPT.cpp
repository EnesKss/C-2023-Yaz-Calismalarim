#include <stdio.h>

union Veri {
    int tamSayi;
    float ondalikliSayi;
    char karakter;
};

int main() {
    union Veri veri;

    veri.tamSayi = 10;
    printf("Tam Sayi: %d\n", veri.tamSayi);

    veri.ondalikliSayi = 3.14;
    printf("Ondalikli Sayi: %.2f\n", veri.ondalikliSayi);

    veri.karakter = 'A';
    printf("Karakter: %c\n", veri.karakter);

    printf("Boyutu: %d byte\n", sizeof(veri));

    return 0;
}

