#include <stdio.h>

int main()
{
	int a , b;
	printf (" Iki adet Tam sayi giriniz:\n");
	scanf("%d%d", &a, &b);
	if (a % b == 0 || a == b)
	{
		printf(" %d sayisi %d sayisinin bir katidir.", a , b);
		
	}
	else (printf(" %d sayisi %d sayisinin bir kati degildir.", a, b));
	
	return 0;
}
