#include <stdio.h>

int main()
{
	
	int i, j;
	int arr[6][5]={ 
	{5,6,5,7,23},
	{1,3,1,2,7},
	{14,15,16,10,51},
	{9,8,8,7,32},
	{31,42,37,29,139},
	{60,74,67,55,0}
	 };
	puts("Salih\t\t\tCanberk\t\t\tMustafa\t\t\tEda\t\t\tToplam\n");
	 for(i=0;i<5;i++)
	 {
	 	for(j=0;j<5;j++)
	 	{
	 		printf("Urun %d: %d Adet\t\t",i+1, arr[i][j]);
		 }
		 puts("\n");
	 }
	 printf("Salih Toplam:%d\t\tCanberk Toplam%d\tMustafa Toplam:%d\tEda Toplam:%d\t", arr[5][0], arr[5][1], arr[5][2], arr[5][3], arr[5][3]);
	
}
