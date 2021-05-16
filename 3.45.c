#include <stdio.h>

int main(){
	
	int sayac=2,n,x;
	float e=1,  faktoriyel=1, ep=1.0, pay=1;
	
		printf(" Faktoriyel Hesaplanacak Sayiyi Giriniz:");
		scanf("%d", &n);
		printf("e uzeri x icin x degeri giriniz!:");
		scanf("%d", &x);
		
		pay = x;
	while(sayac <= n){
		
		ep += (pay/faktoriyel);
		e += (1 / faktoriyel);
		faktoriyel *= sayac;
		pay *= x;
		sayac++;
		
		
		 

	
		}
			
		printf("Sonuc = %f\n", faktoriyel);
		printf("Buldugunuz euler sabiti:%f\n", e);
		printf("e uzeri x == %f" ,ep);
		
		

	system("pause");
	return 0;
}

