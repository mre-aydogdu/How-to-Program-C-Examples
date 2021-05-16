#include <stdio.h>

int main()
{
	int sayac=1;
	printf("N\t10*N\t100*N\t10000*N\t\n");
	
	while(sayac <= 10)
	{
		printf("%d\t%d\t%d\t%d\t\n", sayac, (sayac * 10), sayac*100, sayac *1000);
		sayac++;
		
	}
	system("pause");
	return 0;
}

