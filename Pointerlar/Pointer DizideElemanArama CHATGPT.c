#include <stdio.h>

int ara(int *arr, int size, int toSearch); // Fonksiyon prototipi
void bastir(int *array, int size); // Fonksiyon prototipi

int main()
{
   int array[100];
   int size, toSearch, searchIndex;

   printf("Dizimiz kac elemanli olsun: ");
   scanf("%d", &size);

   printf("Dizimizin elemanlari:\n");
   bastir(array, size); // Kullan�c�dan elemanlar� alarak diziyi dolduran fonksiyon

   printf("Hangi elemani ariyorsun: ");
   scanf("%d", &toSearch);

   searchIndex = ara(array, size, toSearch); // Eleman� arayan fonksiyon

   if (searchIndex == -1)
   {
       printf("%d elemani dizinde bulunmuyor.\n", toSearch);
   }
   else
   {
       printf("%d elemani %d. pozisyonda bulunuyor.\n", toSearch, searchIndex + 1);
   }

   return 0;
}

int ara(int *arr, int size, int toSearch)
{
    int index = 0;

    int *arrEnd;
    arrEnd = (arr + size - 1);

    while (arr <= arrEnd && *arr != toSearch) // Dizi boyunca dola�arak eleman� arayan d�ng�
    {
        arr++;
        index++;
    }

    if (arr <= arrEnd)
    {
        return index; // Eleman bulunduysa indeksi d�nd�r�r
    }

    return -1; // Eleman bulunamad�ysa -1 d�nd�r�r
}

void bastir(int *array, int size)
{
    int *arrEnd;
    arrEnd = (array + size - 1);

    while (array <= arrEnd) // Kullan�c�dan elemanlar� alarak diziyi dolduran d�ng�
    {
        scanf("%d", array++);
    }
}

