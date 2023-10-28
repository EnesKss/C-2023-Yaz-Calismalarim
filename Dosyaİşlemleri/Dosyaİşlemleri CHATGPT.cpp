#include <stdio.h>

int main() {
    FILE *dosya;
    dosya = fopen("ornek.txt", "w"); // Dosya oluşturuluyor veya varsa üzerine yazılıyor

    if (dosya == NULL) {
        printf("Dosya oluşturulamadı!");
        return 1;
    }

    fprintf(dosya, "Bu bir ornek dosya!"); // Dosyaya yazma işlemi
    fclose(dosya); // Dosyayı kapatma

    return 0;
}

