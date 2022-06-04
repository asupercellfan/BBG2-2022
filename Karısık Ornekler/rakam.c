#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	
	char m1[50]="Ben 1995 yilinda dogdum, su an 27 yasindayim.";
	
	int a=0, b=0, i;
	
	for(i=0;i<strlen(m1);i++)
		
		(isdigit(m1[i]))? a++: a;
		
		printf("Rakam sayisi : %d dir.\n",a);
		
		if((m1[i]>='0')&&(m1[i]<='9'))	b+=m1[i]-'0';
		
		printf("Rakamlar toplami = %d dir.\n",b);
		
		return 0;
	
}


// Rakamlar toplami kismi calismiyor !!!
