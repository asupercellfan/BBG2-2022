#include<stdio.h>
#include<conio.h>

void tik()
{
	static int x=0;
	printf("%d \n",x);
	x++;
}

int main()
{
	int i;
	for(i=0;i<25;i++)
	{
		tik();
	}
	getch();
	return 0;
}

// static kullanim ornegi
