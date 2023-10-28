#include<stdio.h>
#include<stdlib.h>


	//fgetc(); dosyadan tek bir karakter okur
	//fscanf() dosyadan biçimlendirilmiþ karakter dizisi okur



int main(){

	FILE *dosya;


	/*
	char karakter;
	dosya=fopen("deneme.txt","r");

	if(dosya!=NULL)
	{
		karakter=fgetc(dosya);
		printf("%c",karakter);
	}
	else
	{

		printf("dosya bulunamadi");
	}

	*/

	/*
	char k1[10],k2[10];
	int sayi;

	if((dosya=fopen("deneme.txt","r"))!=NULL)
	{
	    fscanf(dosya,"%s",&k1);
	    fscanf(dosya,"%s",&k2);
	    fscanf(dosya,"%d",&sayi);
	    printf("%s %s %d",k1,k2,sayi);


	}
	else
    {
         printf("Dosya bulunamadi");
    }

    */


    /*
    char kelime[50][20];
    int i=0;

    if((dosya=fopen("deneme.txt","r"))!=NULL)
    {
        while(!feof(dosya))
        {
            fscanf(dosya,"%s",&kelime[i]);
            printf("%s ",kelime[i]);
            i++;
        }

    }
    else
    {
        printf("dosya bulunamadi");
    }

*/
/*
        char numaralar[10][10],isimler[10][20];
        int notlar[10];
        int i=0;

    if((dosya=fopen("deneme.txt","r"))!=NULL)
    {
        while(!feof(dosya))
        {

        fscanf(dosya,"%s %s %d",&numaralar[i],&isimler[i],&notlar[i]);
        printf("%s %s %d\n",numaralar[i],isimler[i],notlar[i]);
        i++;
        }
    }
    else
    {
        printf("dosya bulunamadi");
    }
*/

    char karakter;
    if((dosya=fopen("deneme.txt","r"))!=NULL)
    {
        karakter=fgetc(dosya);
        while(karakter!=EOF)
        {
            printf("%c",karakter);
            karakter=fgetc(dosya);
        }
    }

	fclose(dosya);



}
