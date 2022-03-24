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
	unsigned int y=1 <<31;
	char s[32];
	
	for(i=0;i<32;i++)
	{
		if((x&y)!=0)
		s[i]='1';
		else
		s[i]='0';
		y=y>>1;
	}
	for(i=0;i<32;i++)
	printf("%c",s[i]);
}
// Girdigimiz sayisi 2lik duzende yazdirdik fakat dizi kullandik.
