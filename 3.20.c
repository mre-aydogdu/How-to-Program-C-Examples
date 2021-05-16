#include <stdio.h>
#include <stdbool.h>

int main()
{
	int saat, ekstra;
	float ucret, maas;
	
	
	while(true)
	{
		printf("Calisilan Saati Girin:\n");
		scanf("%d", &saat);
		printf("Calisanin saat Ücretini Girin:\n");
		scanf("%f", &ucret);
		maas = (saat * ucret);
		if( saat > 40)
		{
			ekstra = saat - 40;
			maas = ((saat - ekstra) * ucret) + (ekstra * ucret * 3/2);
			
		}
	
		
		printf("Maas: %f\n", maas);
		
	}
	scanf("");
	return 0;
	
}
