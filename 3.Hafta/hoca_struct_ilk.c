#include<stdio.h>
#include<stdlib.h>

typedef struct {
	int a,b,c;
	double d;
}bohca;

bohca sonuclar(int a, int b) {
	bohca sonuc;
	sonuc.a=a+b;
	sonuc.b=a-b;
	sonuc.c=a*b;
	sonuc.d=a/b;
	return sonuc;
}
int main()  {
	int x=5,y=3;
	bohca a;
	a = sonuclar(x,y);
	printf("Sonuclar : %d	%d	%d	%lf	\n",a.a,a.b,a.c,a.d);
}
