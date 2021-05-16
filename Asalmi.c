#include <stdio.h>
#include <math.h>
void isPrime();
int main()
{
	int i,count;
	printf("1-n Arasindaki Asal Sayilari yazdirmak icin n sayisi giriniz:");
	scanf("%d", &count);
	for (i=1;i<count;i++)
	{
	
	isPrime(i);
}
system("pause");
return 0;

}

void isPrime(int i)
{
	int j, asal=0;
	for(j=2; j <= sqrt(i); j++)
	{
		if (i % j == 0)
		{
			asal = 1;
			break;
		}
	}
	
	if(i == 1)
	{
		asal = 1;
	}
	else
	{
		if(asal == 0)
		{
			printf("%d Asal bir Sayidir\n", i);
			
		}
		
	}
}
