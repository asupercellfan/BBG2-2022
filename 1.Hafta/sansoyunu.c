#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

int zarsalla(void);
int main()
{
	int oyundurumu,toplam,benimpuan;
	srand(time(NULL));
	toplam = zarsalla();
	
	switch(toplam)
	{
		case 7: case 11:
		oyundurumu = 1;
		break;
			
		case 2: case 3: case 12:
		oyundurumu = 2 ;
		break;
		
		default:
		oyundurumu = 0;
		benimpuan = toplam;
		printf("Oyuncunun kazanacagi zar %d \n",benimpuan);
		break;
			
		while (oyundurumu==0)
		{
			toplam = zarsalla();
			if (toplam==benimpuan)	
				oyundurumu = 1;
			else 
				if (toplam==7) 
					oyundurumu = 2;
		}	
			
		if(oyundurumu==1)	
			printf("Tebrikler, oyuncu kazandi !!! \n");
		else 
			printf("Maalesef, oyuncu kaybetti :( \n");
		getch();
		return 0;
	}
}
int zarsalla(void)
{
	int zar1,zar2,gelentoplam;
	zar1 = 1 + (rand() % 6);
	zar2 = 1 + (rand() % 6);
	gelentoplam = zar1 + zar2;
	printf("Oyuncunun attigi zar : %d + %d = %d \n",zar1,zar2,gelentoplam);
	return gelentoplam;
}

// istenilen ciktiyi vermiyor
