#include<stdio.h>
#include<conio.h>

int muk(int deger);
int main()
{
	int i;
	printf("1 ile 1000 arasindaki tamsayilarda;\n");
	
	for(i=2;i<=1000;i++)
	{
		if(muk(i)==1)
		{
			printf("%d sayisi mukemmel sayidir.\n",i);
		}
	}
	getch();
	return 0;
}
int muk(int deger)
{
	int carpantoplam = 1;
	int j;
	
	for(j=2;j<(deger-1);j++)
	{
		if(deger % j == 0) 
		{
			carpantoplam += j;
		}
	}
	if (carpantoplam== deger)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

// Mukemmel sayi bulma.
