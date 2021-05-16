#include <stdio.h>

int main()
{
	long int max = 0, min = 999999999, sayi;
	
	
	printf("En buyuk ve En kucuk sayi bulma sihirbazina Hos Geldiniz...\n");
	printf("Sayi dizinizi girmeye baþlayabilirsiniz...\n");
	while(1)
	{
		printf(" Sayilariniz aliniyor : (Bitirmek icin negatif bir sayi giriniz!)\n");
		scanf("%d", &sayi);
		
		if( sayi < 0)
		{
			printf(" En buyuk sayiniz: %d\n", max);
			printf(" En kucuk sayiniz: %d\n", min);
			
			system("pause");
			
			return 0;
		}
		if(max < sayi)
		{
			max = sayi;
		}
		else if( min > sayi)
		{
			min = sayi;
		}
		
		
	}
	
	return 0;
}
