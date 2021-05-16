#include <stdio.h>

int main()
{
	int sayi1, sayi2;
	
	printf("\nLutfen iki tam sayi giriniz...\n");
	scanf("%d%d", &sayi1, &sayi2);
	
	if(sayi1 < sayi2){
		printf("%d is larger\n", sayi2);
		
	}
	if(sayi1 > sayi2){
		printf("%d is larger\n", sayi1);
	}
	if( sayi1 == sayi2){
		printf("These numbers are equal\n");
	}
	
	return 0;
}
