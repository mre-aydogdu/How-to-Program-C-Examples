#include <stdio.h>

int siniflandir(int);

int main()
{
	while(1)
	{
	
	int sayi;
	
	printf("\nNotunuzu Giriniz:");
	scanf("%d", &sayi);
	printf("Sonuc: %d\n", siniflandir(sayi));
}
}

int siniflandir(int sayi)
{
	int sonuc;
	if(sayi<=100 && sayi >= 0)
	{
		if(sayi >= 90 )
		{
			sonuc = 4;
		}
		else if(sayi>=80)
		{
			sonuc = 3;
		}
		else if(sayi>=70)
		{
			sonuc = 2;
		}
		else if(sayi >= 60)
		{
			sonuc = 1;
		}
		else
		{
			sonuc = 0;
		}
	}
	else
	{
		printf("Lutfen 0-100 Arasi Bir Deger Giriniz!");
	}
	
	return sonuc;
}
