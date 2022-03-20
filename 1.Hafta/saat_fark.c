#include<stdio.h>
#include<conio.h>
#include<math.h>

unsigned saniye(unsigned saat , unsigned dakika, unsigned saniye)
{
	return 3600*saat + 60*dakika + saniye;
}
int main()
{
	int hour,minute,second,ilk,ikinci,fark;
	printf("Ilk saat (Saat,dakida,saniye) :");
	scanf("%d %d %d",&hour,&minute,&second);
	ilk = saniye(hour,minute,second);
	printf("Ikinci saat (Saat,dakida,saniye) :");
	scanf("%d %d %d",&hour,&minute,&second);
	ikinci = (saniye(hour,minute,second));
	
	fark = fabs(ilk-ikinci);
	printf("Fark %d saniye \n",fark);
	
	getch();
	return 0;
}

// Girilen 2 farkli saat,dakika ve saniye farkini bulma.

