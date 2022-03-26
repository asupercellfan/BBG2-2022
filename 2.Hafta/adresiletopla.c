#include<stdio.h>

int dizi(int a[],int n)
{
	int *p,toplam=0,sayac;
	
	p=&a[0];
	for(sayac=0;sayac<n;sayac++)
	toplam += *(p+sayac);
	
	return toplam;
}

int main(void)
{
	int sayilar[10]={1,2,3,4,5,6,7,8,9,10};
	int f;
	
	f=dizi(sayilar,10);
	printf("Sayilarin toplami = %d",f);
	
	getch();
	return 0;
}

// Dizinin ilk elemaninin baslangic adresini kullanarak dizi elemanlarini toplama
