#include<stdio.h>
#include<conio.h>

int main()
{
	int a=37;
	ikili_gosterim(a);
	
	getch();
	return 0;
}

void ikili_gosterim(int x)
{
	int i;
	unsigned int y=1 << 31;
	
	for(i=31;i>=0;i--)
	{
		printf("%1d",(x&y)!=0);
		y=y>>1;
	}
}
//Girdigimiz sayiyi 2lik duzende yazdirdik. (<< - >> ve & ile bitler uzerinde islem yaptik)
