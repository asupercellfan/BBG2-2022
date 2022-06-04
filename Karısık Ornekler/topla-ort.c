#include<stdio.h>
#include<stdlib.h>

int topla(int *a,int n);
float orta(int *a,int n);

int main(){
	
	int *a,n=1,i=0;
	
	a = (int)malloc(n*sizeof(int));
	printf("Islem yapmak istediginiz sayilari giriniz. \n");
	
	do {
		printf("%d.a :",i);
		scanf("%d",(a+i));
		realloc(a,(i+1)*sizeof(int));
	}
	while(*(a+i++)!=0);
	
	int toplam= topla(a,i-1);
	float ort = orta(a,i-1);
	printf("Girdiginiz sayilarin toplami = %d \n",toplam);
	printf("Gridiginiz sayilarin otralamasi = %.3f \n",ort);
	
	return 0;
}

int topla(int *a,int n) {
	int i,t=0;
	printf("n = %d \n",n);
	for(i=0;i<n;i++){
		t += *(a+i);
	}
	return t;
}

float orta(int *a,int n) {
	int i,t=0;
	for(i=0;i<n;i++) {
		t += *(a+i);
	}
	return (float)t/n;
}
 // Klavyeden 0girilene kadar, girilen sayilari topladýk ve ortalamasini bulduk.


