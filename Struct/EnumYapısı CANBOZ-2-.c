#include <stdio.h>
#include <stdlib.h>

 typedef enum
 {
   ocak=5,
   subat,
   mart,
   nisan,
   mayis,
   haziran,
   temmuz,
   agustos,
   eylul,
   ekim,
   kasim,
   aralik

 }mert;

void ayi_goster(mert ay)
{
    switch(ay)
    {
    case ocak:
        printf("Ocak");
        break;
        case subat:
        printf("subat");
        break;
        case mart:
        printf("mart");
        break;
        case nisan:
        printf("nisan");
        break;
        case mayis:
        printf("mayıs");
        break;
        case haziran:
        printf("haziran");
        break;
        case temmuz:
        printf("temmuz");
        break;
        case agustos:
        printf("agustos");
        break;
        case eylul:
        printf("eylul");
        break;
        case ekim:
        printf("ekim");
        break;
        case kasim:
        printf("kasim");
        break;
        case aralik:
        printf("aralik");
        break;
        default:
        printf("Boyle bir ay yok");
        break;

    }
}

int main()
{
    mert ay=8;
    ayi_goster(ay);
    return 0;
}
