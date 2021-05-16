#include <stdio.h>

int main()
{ 

int gecen=0, kalan=0,sayac, num;

printf("Lutfen ogrenci sayinizi giriniz:");
scanf("%d", &sayac);


while ( sayac > 0)
{
	printf("Kalan her ogrenci icin 1 gecen her ogrenci icin 2 giriniz:\n");

	printf("Ogrenci sayisi : %d\n",sayac);
	scanf("%d", &num);

    if(num == 1)
	{
		kalan++;
		
	}
	else if (num == 2)
	{
		gecen++;
	}
	else {
		printf("Hatali bir sayi girdiniz!!!\n");
	}
	
	
	sayac--;
	
}
		printf(" Gecen sayisi: %d\n", gecen);
		printf(" Kalan sayisi: %d\n", kalan);
		
		
		system("pause\n");
	
return 0;
}
