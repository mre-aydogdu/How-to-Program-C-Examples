#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int sayiyi_bul(int);

int main()
{
	int sayi;
	printf("1 - 1000 arasinda bir sayi tuttum.\nBakalim Bilebilecek misin:");
	sayiyi_bul(sayi);
	
	system("pause");
	return 0;
}

	
int sayiyi_bul(int sayi)
{
	int rastgele;
	char tekrar;
	srand(time(0));
	rastgele = 1 + rand() %999;
	
	do
	{
		scanf("%d", &sayi);
		if(rastgele < sayi)
		{
			printf("Fazla Buyuk!\n");
		}
		else if(rastgele > sayi)
		{
			printf("Fazla Kucuk!\n");
			
		}
		else
		{
			printf("Bravo!! Dogru sayiyi Buldun!\nTekrar Oynamak Ister misin?(y/n):");
			scanf(" %c", &tekrar);
			switch(tekrar)
			{
				case 'y':
					main();
					break;
				case 'n':
					printf("Bizi Tercih Ettiginiz Icin Tesekkurler\n");
					break;
				default:
					printf("Duzgun bi sey gir!");
					main();
			}
		}
		
		
	}
	while(rastgele != sayi);
	
}
