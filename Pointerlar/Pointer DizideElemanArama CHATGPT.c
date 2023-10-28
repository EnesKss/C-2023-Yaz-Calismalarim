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
   bastir(array, size); // Kullanýcýdan elemanlarý alarak diziyi dolduran fonksiyon

   printf("Hangi elemani ariyorsun: ");
   scanf("%d", &toSearch);

   searchIndex = ara(array, size, toSearch); // Elemaný arayan fonksiyon

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

    while (arr <= arrEnd && *arr != toSearch) // Dizi boyunca dolaþarak elemaný arayan döngü
    {
        arr++;
        index++;
    }

    if (arr <= arrEnd)
    {
        return index; // Eleman bulunduysa indeksi döndürür
    }

    return -1; // Eleman bulunamadýysa -1 döndürür
}

void bastir(int *array, int size)
{
    int *arrEnd;
    arrEnd = (array + size - 1);

    while (array <= arrEnd) // Kullanýcýdan elemanlarý alarak diziyi dolduran döngü
    {
        scanf("%d", array++);
    }
}

