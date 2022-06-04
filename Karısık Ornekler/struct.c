#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
	char adsoyad[40];
	int puan;
	struct Ogrenci *next;
}Ogrenci;

int main(){
	
	Ogrenci *head,*temp,*end;
	head=temp=end=NULL;
	int i=0;
	
	do {
		temp = (Ogrenci *)malloc(sizeof(Ogrenci));
		printf("Ad Soyad - - > ");
		gets(temp->adsoyad);
		
		if(strcmp(temp->adsoyad,"*")==0){
			break;
		}
	printf("Puan - - > ");
	scanf("%d",&temp->puan);
	getchar();
	temp->next=NULL;
	
	if(i==0){
		head=temp;
		end=temp;
	}
	else {
		end->next=temp;
		end=temp;
	}
	i++;
 }
 while(1);
 printf("- - - - - - - LISTE - - - - - - - \n");
 temp=head;
 while(temp!=NULL) {
 	printf("%s - - - %d \n",temp->adsoyad,temp->puan);
 	temp=temp->next;
 }
}

//struct yapisi ile bagli liste olusturma.

