#include <stdio.h>

void ters_cevir(int);

int main()
{
	int sayi;
	printf("Ters Cevirme Sihirbazina Hos geldiniz!!!\n");
	printf("Ters cevirilecek sayiyi giriniz:\n");
	scanf("%d", &sayi);
	
	ters_cevir(sayi);
	
	printf("\n\n\n");
	system("\npause");
	return 0;
}

void ters_cevir(int a)
{
	int basamak;
	
	while (a>0)
	{
		basamak = a % 10;
		a/= 10;
		printf("%d", basamak);
	}
}
