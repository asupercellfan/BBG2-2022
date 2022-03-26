#include<stdio.h>

void degistir(int *a, int *b)
{
	int g;
	g = *a;
	*a = *b;
	*b = g;
}

int main()
{
	int x,y=23;
	
	printf("Lutfen bir sayi giriniz.\n");
	scanf("%d",&x);
	printf("Girdiginiz sayi x = %d ve y = %d\n",x,y);
	degistir(&x,&y);
	printf("Simdi ise x = %d ve y = %d \n",x,y);
	
	getch();
	return 0;
}

// Referansa gore cagýrma ornegi
