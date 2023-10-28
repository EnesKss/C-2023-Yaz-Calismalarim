#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    //Kullanıcıya kaç elemanlı bir sayı dizisi oluşturmak istediğini sorun
    //Pointer kullanarak elemanları tek tek alın ve console a bastırın

    int arr[100];
    int N;
    int *ptr;
    ptr=arr;




    printf("Dizi kac elemanli olsun\n");
    scanf("%d",&N);

    printf("Lutfen elemanlari giriniz\n");
    int i=0;
    for( i=0;i<N;i++)
    {
        scanf("%d",ptr);
        ptr++;
    }
    ptr=arr;
    printf("Degerlerim:\n");
    for( i=0;i<N;i++)
    {
        printf("%d ",*ptr);
        ptr++;
    }

    return 0;







}
