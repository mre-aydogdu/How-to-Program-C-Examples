#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

#define FINISH 70
void move_kaplumbaga(int* kPtr);
void move_tavsan(int* tPtr);
void konum_yaris(const int* const kPtr,const int* const tPtr);
int main()
{
	srand(time(0));
	int baslat, kaplumbaga = 1, tavsan=1, zaman =0;
	
	puts("Tavsan ve Kaplumbaga Yarisi!!");
	puts("*****************************");
	printf("Yarisi baslatmak icin 1'e basiniz:");
	scanf("%d", &baslat);

while(baslat ==1 && kaplumbaga != FINISH && tavsan != FINISH)
{
	
	sleep(1);
	move_kaplumbaga(&kaplumbaga);
	
	move_tavsan(&tavsan);
	
	konum_yaris(&kaplumbaga, &tavsan);
	
	zaman++;	
}
if(baslat != 1)
main();

if(kaplumbaga > tavsan)
{

puts("Kaplumbaga kazandi");
printf("Gecen zaman : %d saniye", zaman);
}

else if(tavsan > kaplumbaga)
{
	puts("Tavsan Kazandi");
	printf("Gecen Zaman : %d saniye", zaman);
}
else
{
	puts("Berabere!!");
	printf("Gecen Zaman : %d saniye\n", zaman);	
	}
system("pause");
}


void move_kaplumbaga(int* Pkaplumbaga)
{
	int i;
	i = 1 + rand() %10;
	
	if(i<=5 && i>=1) //hizli haraket 3 adim
	{
	
			*Pkaplumbaga += 3;
			}
	else if(i<=7 && i>=6)
	{
		*Pkaplumbaga -= 6;
		
	}
	else
	{
		*Pkaplumbaga +=1;
	}
	
	if(*Pkaplumbaga < 1)
	*Pkaplumbaga = 1;
	else if(*Pkaplumbaga > FINISH)
	*Pkaplumbaga = FINISH;
}

void move_tavsan(int* Ptavsan)
{
	int i;
	i = 1 +rand() % 10;
	if(i==1 || i==2) //uyuklar
	{
		*Ptavsan = *Ptavsan;
	}
	else if(i==3||i==4) //9 adým ileri
	*Ptavsan +=9;
	
	else if(i==5) //12 adým geriler
	*Ptavsan -= 12;
	
	else if(i==6 || i==7 || i==8)
	*Ptavsan +=	1;
	
	else
	*Ptavsan -= 2;
	
	if(*Ptavsan < 1)
	*Ptavsan = 1;
	
	else if (*Ptavsan > FINISH)
	*Ptavsan = FINISH;
}

void konum_yaris( const int* const kaplumbagaPtr, const int* const tavsanPtr ){
   int i;
   
   if(*kaplumbagaPtr == *tavsanPtr){
      for(i = 1; i < *kaplumbagaPtr; i++){
         printf("%s", "_" );
      }
      printf("OUCH!!!");                
   }
   
   else if(*kaplumbagaPtr < *tavsanPtr){
      for(i = 1; i < *kaplumbagaPtr; i++ ){
         printf("%s","_" );
      }   
      printf("K");
      
      for(i = 1; i < (*tavsanPtr - *kaplumbagaPtr); i++){
         printf("%s","_" );
      }
      printf("T");
      }
      
      
   else
   {
      for(i = 1; i < *tavsanPtr; i++){
         printf("%s","_");      
      }     
      printf("T");
      
      for( i = 0; i < (*kaplumbagaPtr - *tavsanPtr); i++){
         printf("%s","_" );     
      }
      printf("K");
   }
   
   printf("\n");
}
