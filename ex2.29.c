#include <stdio.h>

int main()
{
	char a;
	printf("Bir sayi, karakter ya da harf giriniz!\n");
	scanf("%c", &a);
	
	printf(" %c'nin dizindeki yeri:%d", a , a);
	
	return 0;
}
