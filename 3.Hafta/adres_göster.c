#include<stdio.h>
#include<conio.h>

int main(){
	int a=45,b=33;
	int *p1,*p2;
	int **p3;
	p3=&p1;
	p1=&a;
	p2=&b;
	
	printf("Adres	a : %p \n",p1);
	printf("Adres	b : %p \n",p2);
	printf("Adres	*p1 : %p \n",p3);
	return 0;
}
