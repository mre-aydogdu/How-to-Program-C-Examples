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
	puts("\t\t\t\t\tPegasus Havayollar�na Ho� geldiniz!!!\nPegasus �yi U�u�lar Diler");

while(1)
{
	
	printf("L�tfen birinci s�n�f U�ak Bileti i�in 1'e bas�n�z\n");
	printf("L�tfen ekonomik s�n�f U�ak Bileti i�in 2'ye bas�n�z\n");
	
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
	puts("Business koltuklarimiz t�kenmistir!!\n Ekonomi s�n�f� bilet alabilirsiniz");
	puts("Ekonomi s�n�f� bilet ay�rtmak i�in ---> 1\nBir sonraki sefer i�in ---> 2");
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
	puts("Ekonomi koltuklarimiz tukenmis�ir!!\n Business sinifi bilet alabilirsiniz");
	puts("Businnes s�n�f� bilet ay�rtmak icin ---> 1\nBir sonraki sefer icin ---> 2");
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
