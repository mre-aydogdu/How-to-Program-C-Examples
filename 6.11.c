#include <stdio.h>
#define SIZE 10
int main()
{
	int i,pass,j=0,dif=0;
	int a [SIZE] = {2, 4, 6, 8, 10, 22, 99, 45, 68, 77};
	
	puts("Dizinin ilk sirasi");
	
	for(i=0;i<SIZE;i++)
	{
		printf("%4d", a[i]);
		
	}
	
	for(pass=1; pass<SIZE;pass++)
	{
		j++;
		for(i=0;i<SIZE-j;i++)		//Her aramada arama sayisi azalmasi için j deðiþkeni tanýmladýk ve SIZE deðerinden 1 yerine j deðerini çýkarýyoruz
		{
			if (a[i] > a[i+1]){
			
			dif++;
			int temp = a[i];
			a[i] = a[i+1];
			a[i+1] = temp ;
			
		}
		
		}
		if(dif == 0)
		{
				puts("\nDizi Zaten Siralidir:");
	
	for(i=0;i<SIZE;i++)
	{
		printf("%4d", a[i]);
	}
	return 0;
	puts(" ");
	}
		
		else;
	}
	
	puts("\nSiralanmis dizi:");
	
	for(i=0;i<SIZE;i++)
	{
		printf("%4d", a[i]);
	}
	puts(" ");
}
