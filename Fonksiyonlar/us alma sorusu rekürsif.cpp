#include<stdio.h>

// üs kuvvet aldıran rekürsif fonksiyon
int usss(int us,int taban)
{
	int sonuc;
	if(us==0)
	{
		sonuc=1;
	}
	else
	{
		sonuc=taban*usss(us-1,taban);
	}
	return sonuc;
}







int main()
{
	int us,taban;
	
	printf("lutfen tabani ve ust degerini giriniz: ");
	scanf("%d %d",&taban,&us);
	printf("%d ussu %d=%d",taban,us,usss(us,taban));
	
}
