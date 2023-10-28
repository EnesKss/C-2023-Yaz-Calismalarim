#include <stdio.h>
#include <stdlib.h>

int main()
{
   char can[100];
   char *pointer;

   printf("Lutfen bir karakter dizisi girin\n");
   gets(can);

   for(pointer=can;*pointer;pointer++)
   {

   }
   printf("Dizimiz %s %d kadar karakterden olusmaktadir.",can,pointer-can);
}
