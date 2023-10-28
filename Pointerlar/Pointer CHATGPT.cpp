#include <stdio.h>

int main() {
   int sayi = 42;
   int *sayiPtr;

   sayiPtr = &sayi;  // sayi'nin bellek adresini sayiPtr'ye atama

   printf("sayi'nin degeri: %d\n", sayi);
   printf("sayiPtr'nin degeri: %p\n", sayiPtr);
   printf("sayiPtr'in gosterdigi deger: %d\n", *sayiPtr);

   *sayiPtr = 24;   // sayi'nin degerini degistirme

   printf("sayi'nin yeni degeri: %d\n", sayi);

   return 0;
}

