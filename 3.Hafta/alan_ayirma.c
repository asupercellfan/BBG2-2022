#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main() {
	int *x,i=0,toplam=0,N=2;
	float ortalama;
	
	x=(int *)malloc(N*sizeof(int));
	printf("Elemanlari giriniz. \n");
	
	do {
		printf("%d.Eleman = ",i+1);
		scanf("%d",&x[i]);
		toplam += x[i];
		
		if(i>N) {
			N=2*N;
			realloc(x,N*sizeof(int));
		}
	}
	while(x[i++]!=0);
	
	free(x);
	
	if(i>1) {
		ortalama = (float) toplam/(i-1);
		printf("Bu %d sayinin ortalamasi %f dir. \n",(i-1),ortalama);
	}
	else printf("Eleman sayisi yetersizdir! \n");
	
	getch();
	return 0;
}

// N adet int gozu ayirdik, buraya bir dizi yazip isimiz bittiginde ayirdigimiz alani bosalattik.
