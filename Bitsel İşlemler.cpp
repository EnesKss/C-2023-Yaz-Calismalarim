#include <stdio.h>
 
int main()
{
   // Bitsel iþlemler = bir tam sayýnýn bitleri üzerinde iþlemler yaparken kullanýlýr

   // & = AND
   // | = OR
   // ^ = XOR
   // <<  sola kaydýrma
   // >>  saða kaydýrma

   int a= 9;  // 00001001 = 9
   int b= 14; // 00001110 = 14
   int c = 0; // 00000111 = 7

   c = a & b;
   printf("and = %d\n",c);

   c = a | b;
   printf("or = %d\n",c);

   c = a ^ b;
   printf("xor = %d\n",c);

   c = b << 1;     //2yle carp
   printf("Sola kaydirma = %d\n",c);
   
   c = b >> 1;				//2ye böl
   printf("Saga kaydirma = %d\n",c);

   return 0;
}
