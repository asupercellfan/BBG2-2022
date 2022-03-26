#include<stdio.h>

int main(void)
{
	int dizi[7] = {11,22,33,44,55,66,77};
	int i;
	
	for(i=0;i<7;i++)
	{
		printf("Dizi[%d] Degeri: %d ve Adresi %p\n",i,dizi[i],&dizi[i]);
	}
	getch();
	return 0;
}

// Isaretci ve diziler arasi iliski icin ornek
