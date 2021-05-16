#include <stdio.h>
int i=0;

int main()
{
	
	int dizi[20]= {};
	
	printf("10-100 arasinda 20 sayi giriniz:");
	
	for(i=0;i<20;i++)
	{
		scanf("%20d", &dizi[i]);
		
		if(dizi[i] == dizi[i-1])
		{
		i--;
		continue;
	}
		else
		printf("%d. Eleman : %d\n",i+1, dizi[i]);
		
		 
	}
	
}
