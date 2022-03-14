#include<stdio.h>
#include<conio.h>

float mat3(int a, int b ,int c)
{
	float m;
	m=(float)(a+b+c)/(2*b/c);
	return m;
}

float mat2(int a , int b,int c)
{
	float m;
	m=(float)((c-a)*b/(a+1));
	return m;
}
float mat1(int a,int b,int c)
{
	float m;
	m=(float)((a+b)*c/(b+4));
	return m;
}

main()
{
	int a,b,c,i;
	float m;
	
	for(i=0;i<5;i++)
	{
		printf("a,b ve c degerlerini giriniz.\n");
		scanf("%d %d %d",&a,&b,&c);
		if((a<b) && (b<c))
		{
			m=mat1(a,b,c);
			printf("Sonuc : %f\n",m);	
		}
		else if((b<a)&&(a<c))
		{
			m=mat2(a,b,c);
			printf("Sonuc : %f\n",m);
		}
		else 
		{
			m=mat3(a,b,c);
			printf("Sonuc : %f\n",m);
		}
	}
	getch();
}

// icice fonksiyon ornegi
