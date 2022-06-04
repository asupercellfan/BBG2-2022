#include<stdio.h>
#include<conio.h>
#include<string.h>

void my_strcat(char* a,char* b);

int main(){
	char m1[50],m2[50];
	printf("1.Metni giriniz.\n");
	gets(m1);
	printf("2.Metni giriniz. \n");
	gets(m2);
	
	my_strcat(m1,m2);
	printf(m1);
	
	getch();
	return 0;
}

void my_strcat(char* a, char* b){
	
	int i,c=strlen(a);
	
	for(i=0;a[c+i]=b[i];i++);
	
	return i;
	
}
// strcat fonksiyonunu kendimiz yazdik.

