#include <stdio.h>

int main()
{
	
while(1){
	int sayi, temp=0,toplam=0;
	printf("Basamak Toplami Hesaplanacak Sayiyi Giriniz:\n");
	scanf("%d", &sayi);
	
	while(sayi > 0)
	{
		
		temp = sayi % 10;
		sayi = (float) sayi / 10;
		toplam += temp;
		
	}
	printf("Basamak toplami : %d\n\n", toplam);
}
	return 0;
}
