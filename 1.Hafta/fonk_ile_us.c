#include<stdio.h>
#include<conio.h>

int us(int a, int b)
{
	if(b==0)
	return 1;
	
	else return a*us(a,b-1);
	
}

main()
{
	int a,b;
	printf("Us almak istediginiz sayilari sirasi ile giriniz.\n");
	scanf("%d %d",&a,&b);
	
	printf("Sonuc : %d",us(a,b));
	getch();
}

// Fonksiyon ornekleri 
