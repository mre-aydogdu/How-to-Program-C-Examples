#include <stdio.h>

int main()
{
	int a, largest, smallest, temp;
	printf("uc tam sayi giriniz\n");
	scanf("%d%d%d", &largest, &smallest, &a);
	
	if (smallest > largest)
	{
		temp= largest;
		largest = smallest;
		smallest = temp;
	}
	if (a > largest)
	{
		largest = a;
	}
	if (a < smallest)
	{
		smallest = a;
	}

	printf("En kucuk sayi:%d\n", smallest);
	printf("En buyuk sayi:%d\n", largest);
	
	
	return 0;
	
	
	
	
}
