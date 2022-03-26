#include<stdio.h>

int main()
{
	int tam=32;
	int *ptam;
	ptam = &tam;
	
	printf("&tam = %p\n",&tam);
	printf("ptam = %p\n",ptam);
	printf("\n");
	printf("tam = %d\n",tam);
	printf("*ptam = %d\n",*ptam);
	printf("\n");
	
	*ptam = 45;
	
	printf("tam = %d\n",tam);
	printf("*ptam = %d\n",*ptam);
	printf("\n");
	
	printf("&tam = %p\n",&tam);
	printf("ptam = %p\n",ptam);
	
	getch();
	return 0;
}

// pointer kullanimi
