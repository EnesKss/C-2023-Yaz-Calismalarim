#include <stdio.h>
#include <stdlib.h>
#define N 10

int main()
{
    int i,min,max;
    
    int can[N];
    printf("%d kadar deger giriniz",N);
    for(i=0;i<N;i++)
    {
        scanf("%d",can+i);
    }

max=min=*can;
    for(i=1;i<N;i++)
    {
        if(*(can+i)>max)
        {
            max=*(can+i);
        }
        if((*can+i)<min)
        {
            min=*(can+i);
        }
    }
    printf("Dizimizin maksimum degeri: %d\n",max);
    printf("Dizimizin minumum degeri : %d\n",min);

    return 0;
}
