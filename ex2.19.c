#include <stdio.h>

int main()
{
	float sum, avg, prdct, smallest, largest, a, b, c;
	printf("3 adet farkli tam sayi giriniz:\n");
	scanf("%f%f%f", &a, &b, &c);
	sum = a + b + c ;
	avg = (a + b + c)/3 ;
	prdct = a * b * c;
	
	if ( a <= b && a <= c)
	{
		smallest = a;
	}
	if(b < a && b < c)
	{
		smallest=b;
	}
	else(smallest = c);
	
	
	
	if (a > b && a > c)
	{
		largest=a;
	}
	if (b >= a && b >= c)
	{
		largest = b;
		
	}
	else ( largest = c);
	
	printf("\n sayilarin toplami: %f", sum);
	printf("\n sayilarin carpimi: %f", prdct);
	printf("\n sayilarin ortalamasi: %f", avg);
	printf("\n sayilarin en kucugu: %f", smallest);
	printf("\n sayilarin en buyugu: %f" ,largest);
	
	
	
	return 0;
	
	
	
	
}

