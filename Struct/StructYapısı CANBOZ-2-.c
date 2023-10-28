#include <stdio.h>
#include <stdlib.h>

 typedef struct
{
    char isim[10];
    float x_ekseni;
    float y_ekseni;
}nokta;

    void ekranayazdir(nokta can,int n)
    {
        int i;
        for(i=0;i<n;i++)
        {
            printf("%s = (%.2f,%.2f)\n",can.isim,can.x_ekseni,can.y_ekseni);
        }

    }

int main()
{
    nokta can[5]={{"Can",3,4},{"Hakan",5,3},{"Osman",5,3},{"Deniz",5,3},{"Merve",5,3}};
    ekranayazdir(can,5);

    return 0;
}
