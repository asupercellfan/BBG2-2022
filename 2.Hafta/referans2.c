#include<stdio.h>

int bolme(int bolunen, int bolen, int *kalan)
{
	*kalan = bolunen % bolen ;
	return bolunen / bolen ;
}

int main()
{
	int bolunen=35,bolen=3;
	int bolum,kalan;
	bolum = bolme(bolunen,bolen,&kalan);
	printf("Bolum = %d , Kalan = %d\n",bolum,kalan);
	
	getch();
	return 0;	
}

// Referans ile cagirma ornegi
