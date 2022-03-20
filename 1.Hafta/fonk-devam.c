#include<stdio.h>
#include<conio.h>

int muk(float ort1)
{
	int i,c,top1=0;
	c=(int)ort1;
	
	for(i=1;i<c;i++)
	{
		if(c%i==0)		top1 +=i;
		
		if (top1==c)	return 1;
		
		else			return 0;
	}
}

float ortalama(int* y, int n)
{
	int top=0,i,m;
	float ort;
	
	for(i=0;i<n;i++)	top=top+y[i];	
	ort=(float)top/n;
	m=muk(ort);
	
	if(m==1)	printf("%d mukemmel sayidir",(int)ort);
	
	else 		printf("%d mukemmel sayi degildir.",(int)ort);
	
	return ort;
}

int main()
{
	int a[10],j;
	float ort2;
	
	for(j=0;j<10;j++)
	{
		printf("\n a[%d]=> ",j);
		scanf("%d",&a[j]);
	}
	ort2=ortalama(a,10);
	printf("\n ortalama = %f",ort2);
	getch();
	return 0;
}

// 10 adet deger girildi, ort bulundu, bulunan ortun tam kisminin mukemmel olma durumuna bakildi.

// Bulunan ortun tam kismini alip, muk olma durumuna bakildiginda hata veriyor.
