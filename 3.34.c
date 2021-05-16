#include <stdio.h>

int main()
{ 

int sayi, birler, onlar, onbinler,binler;
printf("Palindrom sayi tespit sihirbazina hos geldiniz...\n");
printf("Lutfen 5 basamakli bir sayi girniz:");
scanf("%d", &sayi);

birler = sayi % 10;
onlar  = sayi /10 %10;
binler = sayi /1000 % 10;
onbinler = sayi /10000 % 10; 
if (birler == onbinler && onlar == binler ){
	printf("%d Sayisi bir Palindrom sayidir\n", sayi);
	
}
else {
	printf("Bu sayi Palindrom degildir!!!");
}
system("pause");
return 0;
}
