#include <stdio.h>
int main ()
{
	
	int a, bir , iki, uc, dort, bes;
	printf("Lutfen 5 basamakli bir tam sayi giriniz:\n");
	scanf("%d", &a);
	
	bir = a % 10;
	iki = (a/10) % 10;
	uc = (a/100) % 10;
	dort= (a/1000) % 10;
	bes = (a/10000) % 10;
	
	printf("%d\t%d\t%d\t%d\t%d", bes, dort, uc, iki, bir);
	return 0;
}

