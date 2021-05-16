#include <stdio.h>

int main()
{
	float yil,gun,ay, yas, hedef1, hedef2, yuksek;
	
	
	printf("Lutfen dogum yilinizi giriniz:");
	scanf("%f", &yil);
	printf("Lutfen dogum ayinizi sayi cinsinden giriniz:");
	scanf("%f",&ay);
	printf("Lutfen dogum gununuzu sayi cinsinden yaziniz:");
	scanf("%f", &gun);
	
	ay = ay / 12;
	gun = gun / 365;
	yas = (2021 + 3/12 + 21/365) - yil - ay - gun;
	yuksek = 220-yas;
	hedef1 = yuksek / 2;
	hedef2 = yuksek * 85 / 100;
	
	printf("En yuksek kalp atis hiziniz:%.2f\n", yuksek);
	printf("Hedef Kalp Atis Araliginiz %.2f ile %.2f Arasindadir!!!\n", hedef1, hedef2 );
	
	
	system("pause");
	return 0;
}
