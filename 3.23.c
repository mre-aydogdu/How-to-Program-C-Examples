#include <stdio.h>

int main ()
{
	int count=10, temp, max,sayi;
	while(count > 0){
	
	
	printf("Lutfen %d adet sayi giriniz:", count);
	scanf("%d", &sayi);
	
	
	if (sayi > max || count == 10)
	{
		max = sayi;
	}
	count--;
	
}
printf("En buyuk sayi:%d", max);

system("pause");
return 0;
}
