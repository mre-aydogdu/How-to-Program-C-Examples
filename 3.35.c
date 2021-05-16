#include <stdio.h>

int main()
{
	int a, b, c, d, e, tamsayi, x;
	
	printf("Ikilik sistemde 5 haneli bir sayi girin:");
	scanf("%d",&x);
	
	a = x %10;
	b = x/10 %10;
	c = x/100 %10;
	d = x/1000 %10;
	e = x/10000;
	
	if ( a == 1)
	{
		a = a * 1;
		printf("%d\t",a);
		
	}
	else {
		printf("%d\t",a);
	}
	if(b==1)
	{
		b = 2;
		printf("%d\t", b);
		
	}
	else{
		printf("%d\t",b);
	}
	if(c==1)
	{
		c = 4;
		printf("%d\t", c);
		
	}
	else{
		printf("%d\t",c);
	}
	if(d==1)
	{
		d = 8;
		printf("%d\t", d);
		
	}
	else{
		printf("%d\t",d);
	}
	if(e==1)
	{
		e = 16;
		printf("%d\t\n", e);
		
	}
	else{
		printf("%d\t\n",e);
	}
	
	tamsayi = a + b + c + d + e;
	printf("\nBu sayinin degeri tamsayi olarak:%d\n", tamsayi);
	
	system("pause\n");
	return 0;
	
	
}
