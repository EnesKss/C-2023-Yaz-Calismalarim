#include<stdio.h>
#include<stdlib.h>

int main(){


FILE *dosya;

    // fputs() --> dosyaya bir karakter dizisi kaydeder.
    //fprintf --> dosyaya biçimlendirilmiþ veri kaydeder
    
    /*
   
    dosya=fopen("deneme.txt","w");
    
    fputs("merhaba dünya",dosya);
    
    */
    
     /*
    char isim[20]="ayse";
    dosya=fopen("ayse.txt","w");
    fprintf(dosya,"bu dosya %s'nin dosyasidir.",isim);
    
    */
    
    /*
	}
    dosya = fopen("carpim tablosu.txt","w");
    
    int i,j;
    
    for(i=1;i<=10;i++)
    {
    	for(j=1;j<=10;j++)
    	{
    		fprintf(dosya,"%d x %d =%d\n",i,j,i*j);
		}
		fprintf(dosya,"\n");
	}
    
    */
    /*
    
    
    dosya=fopen("ogrenci.txt","w");
    char isim[20],okul[50],bolum[50];
    
    
    printf("adiniz : "); gets(isim);
    printf("okulunuz : "); gets(okul);
    printf("bolumunuz : "); gets(bolum);
    
    fprintf(dosya,"%s \t %s \t %s",isim,okul,bolum);

    */
    
    /*
    dosya=fopen("merhaba.txt","a");
    fputs("merhaba dunya",dosya);
    
    */
    dosya=fopen("ogrenci2.txt","a");
    char isim[20],okul[50],bolum[50];
    
    
    printf("adiniz : "); gets(isim);
    printf("okulunuz : "); gets(okul);
    printf("bolumunuz : "); gets(bolum);
    
    fprintf(dosya,"%s \t %s \t %s",isim,okul,bolum);
    
    
    
    
    
    
    fclose(dosya);
}
