#include <stdio.h>

int main()
{
	int i;
	float ucret;
	float arr[9]= {250,370,486,549,688,710,802,950,3000};
	for(i=0;i<9;i++)
	{
		printf("%d. Saticinin Ucreti: %f$\n", i+1, 200+arr[i]*0.09);	
	}
	
	return 0;
}
