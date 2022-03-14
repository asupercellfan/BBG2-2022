#include<stdio.h>
#include<conio.h>

int fibonacci(int n)
{
	if((n==1)||(n==2))
	return 1;
	
	else 
	return fibonacci(n-1)+fibonacci(n-2);
}

main()
{
	int n;
	printf("Kacinci sirada bulunan elemani bulayim ?\n");
	scanf("%d",&n);
	
	printf("Istediginiz eleman : %d ",fibonacci(n));
	
	return 0;
}

// fonksiyon ornekleri fibonacci
