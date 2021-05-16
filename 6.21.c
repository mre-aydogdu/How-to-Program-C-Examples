#include <stdio.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");

	int i=0;
	int k = 6, sinif;
	int koltuk[11] = {0};
	int sec = -1;
	puts("\t\t\t\t\tPegasus Havayollarýna Hoþ geldiniz!!!\nPegasus Ýyi Uçuþlar Diler");

while(1)
{
	
	printf("Lütfen birinci sýnýf Uçak Bileti için 1'e basýnýz\n");
	printf("Lütfen ekonomik sýnýf Uçak Bileti için 2'ye basýnýz\n");
	
	scanf("%d", &sinif);
	
	switch(sinif)
	{
	case 1:
		if(i<5)
		{
		i++;
		koltuk[i] = 1;
		printf("---------------------- \nKoltuk numaraniz : %d\n Sinifiniz : Business\n----------------------\n\n", i);
	}
	else 
	{
	puts("Business koltuklarimiz tükenmistir!!\n Ekonomi sýnýfý bilet alabilirsiniz");
	puts("Ekonomi sýnýfý bilet ayýrtmak için ---> 1\nBir sonraki sefer için ---> 2");
	scanf("%d",&sec);
		if (sec == 2)
			puts("Bir sonraki sefer 3 saat sonra...");
		else if(sec == 1)
		{
			koltuk[k] = 1;
			printf("---------------------- \nKoltuk numaraniz : %d\n Sinifiniz : Ekonomi\n----------------------\n\n", k);
			k++;
		}}
		break;
	case 2:
		if(k<=10)
		{
		
		koltuk[k] = 1;
		printf("---------------------- \nKoltuk numaraniz : %d\n Sinifiniz : Ekonomi\n----------------------\n\n", k);
		k++;
	}
	else{ 
	puts("Ekonomi koltuklarimiz tukenmisþir!!\n Business sinifi bilet alabilirsiniz");
	puts("Businnes sýnýfý bilet ayýrtmak icin ---> 1\nBir sonraki sefer icin ---> 2");
	scanf("%d", &sec);
		if (sec == 2)
	puts("Bir sonraki sefer 3 saat sonra...\n\n"); 
		else if(sec == 1)
			koltuk[k] = 1;
			printf("---------------------- \nKoltuk numaraniz : %d\n Sinifiniz : Ekonomi\n----------------------\n\n", k);
			k++;
		}
		break;
	default:
	puts("Pilot musunuz?\n\n");
}
		
		 
	
}
}
