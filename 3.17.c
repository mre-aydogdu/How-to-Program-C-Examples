	#include <stdio.h>
	#include <stdbool.h>
	int main()
	{
		
		
		double hesapno, basPara, topHarcama, topYatan, krediLimit, yeniBalans;
		
		while(true)
		{
			printf("\nHesap numarasini girin : (bitirmek icin -1)");
			scanf("%lf", &hesapno);
			
			if (hesapno == -1)
			return 0;
			
			else {
			printf("Baslangic balansini girin:\n");
			scanf("%lf", &basPara);
			printf("Toplam Harcamayi girin:\n");
			scanf("%lf", &topHarcama);
			printf("Toplam yatirilan parayi girin:\n");
			scanf("%lf,", &topYatan);
			printf("Kredi limitini girin:\n");
			scanf("%lf", &krediLimit);
			yeniBalans = basPara + topHarcama - topYatan;
			
			if(yeniBalans > krediLimit)
			{
				printf("Hesap:\t\t%.2lf\n", hesapno);
				printf("Kredi Limiti:\t%.2lf\n", krediLimit);
				printf("Balans:\t\t%.2lf\n", yeniBalans);
				printf("Kredi Limiti Asimi!!!");
			}
			else { printf("Limit Asilmamistir!!");
			}		} }
			scanf("");
			return 0;
			
	}

