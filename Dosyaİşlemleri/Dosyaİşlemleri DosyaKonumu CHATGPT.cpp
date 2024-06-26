#include <stdio.h>

int main() {
    FILE *dosya;
    long konum;

    dosya = fopen("ornek.txt", "r");

    if (dosya == NULL) {
        printf("Dosya bulunamadı!");
        return 1;
    }

    // SEEK_SET: Dosyanın başından 5. karaktere konumlandırma
    fseek(dosya, 5, SEEK_SET);
    konum = ftell(dosya);
    printf("Konum (SEEK_SET): %ld\n", konum);

    // SEEK_CUR: Mevcut konumdan 3 karakter ileri konumlandırma
    fseek(dosya, 3, SEEK_CUR);
    konum = ftell(dosya);
    printf("Konum (SEEK_CUR): %ld\n", konum);

    // SEEK_END: Dosyanın sonundan 7 karakter geriye konumlandırma
    fseek(dosya, -7, SEEK_END);
    konum = ftell(dosya);
    printf("Konum (SEEK_END): %ld\n", konum);

    fclose(dosya);

    return 0;
}

