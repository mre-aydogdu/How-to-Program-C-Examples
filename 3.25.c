#include <stdio.h>

int main()
{	
	int sayac=3;
	printf("A\tA+2\tA+4\tA+6\t\n");
	
	while (sayac < 16)
	{
		printf("%d\t%d\t%d\t%d\t\n", sayac, sayac+2, sayac+4,sayac+6);
		sayac += 3 ;
		
		
		
		}
		system ("pause\n");
		return 0;
}
