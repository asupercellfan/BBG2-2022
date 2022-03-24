#include<stdio.h>
#include<conio.h>

int topla(int x, int y)
{
	return x+y;
}

int fibonacci()
{
	static int f0=0, f1=1;
	int f2;
	
	f2=f0+f1;
	f0=f1;
	f1=f2;
	return f2;
}

int main()
{
	int sonuc,i;
	
	sonuc=topla(20,15);
	
	printf("Toplam sonucu = %d \n",sonuc);
	
	for(i=0;i<10;i++)
	{
		printf("%d \n",fibonacci());
	}
	getch();
	return 0;
}
// Fonksiyon ornegi ve static kullanimi 
