#include<stdio.h>

int main(void)
{
	int tam=32;
	int *ptam;
	ptam = &tam;
	
	printf("Icerik : %d\n",tam);
	printf("Icerik adresi : %p\n",&tam);
	printf("Icerik adresi : %p\n",ptam);
	printf("Icerik : %d\n",*ptam);
	
	getch();
	return 0;
}
