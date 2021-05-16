#include <stdio.h>
#include <math.h>

int main()
{
	double n, sqrtN;
	int tabanN, tavanN, tavankare, tabankare;
	while(1){
	
	printf("En yakin tamkare sayi bulunacak sayiyi giriniz:\n");
	scanf("%lf", &n);	
	sqrtN = sqrt(n);
	tabanN = (int)sqrtN;
	tavanN = tabanN + 1;
	
	tabankare = tabanN*tabanN;
	tavankare = tavanN*tavanN;
	
	if ( n - tabankare < tavankare - n)
	{
		printf("En yakin tamkare : %d\n", tabankare);
	}
	else if( n - tabankare > tavankare - n)
	printf(" En yakin tamkare : %d\n", tavankare);
}
return 0;
	
}

