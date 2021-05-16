#include <stdio.h>

int main()
{
	float cap, cevre, alan, r, pi;
	printf("Cemberinizin yaricapini giriniz:\n");
	scanf("%f", &r );
	pi = 3.14159;
	cap = 2*r;
	cevre = 2 * pi * r;
	alan = pi * r * r;
	printf("Cember Bilgileri:\n");
	printf("Cap:%f\n", cap);
	printf("Cevre:%f\n", cevre);
	printf("Alan:%f\n", alan);

	
	return 0;
	
}
