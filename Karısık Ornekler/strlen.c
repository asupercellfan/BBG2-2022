#include<stdio.h>
#include<conio.h>
#include<string.h>

int my_strlen(char *a);

int main(){
	char dizi[50];
	printf("Lutfen bir metin giriniz. \n");
	gets(dizi);
	printf("Girilen metnin uzunlugu : %d  \n",my_strlen(dizi));
	getch();
	return 0;
}

int my_strlen(char *a){
	
	int i=0;
	while(*(a++))	i++;
	
	return i;
}

// strlen fonksiyonunu kendimiz yazdik.
