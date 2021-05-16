#include <stdio.h>
void mukemmel();

int main()
{

	mukemmel();	
}

void mukemmel()
{
	long int deger =1,toplam=0,i;
	while(deger>=1 && deger<=1000){
		for(i=1;i <deger;i++)
		{
		if(deger%i==0)
		{
			toplam+=i;
			
			
			
		}
		
		}
		if(deger == toplam)
			{	
				printf("%ld sayisi mukemmel sayidir.\n", deger);
			}
		toplam = 0;
		deger++;
		
	}
	
	
		

}
