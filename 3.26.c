#include <stdio.h>

int main ()
{
	int count=10, temp, max,sayi, ikincibuyuk;
	while(count > 0){
	
	
	printf("Lutfen %d adet sayi giriniz:", count);
	scanf("%d", &sayi);
	
	
	if (sayi > max || count == 10)
	{
		ikincibuyuk = max;
		max = sayi;
	}
	if (sayi < max){
		
		if (sayi > ikincibuyuk)
		{
			ikincibuyuk = sayi;
		}
	}
	count--;
	
}
printf("En buyuk sayi:%d\n", max);
printf("EN buyuk ikinci sayi:%d", ikincibuyuk);

system("pause\n");
return 0;
}
