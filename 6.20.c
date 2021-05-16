#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void play_game(void);

int rand1_6(void)
{
	
	return ((1 + rand()%6) + (1 + rand()%6));
}

int win=0, lose=0;
int main()
{
	srand(time(NULL));
	int basla, oyun_sayisi,i;
	printf("Barbut oyunu simulasyonuna Hos Geldiniz!!!\n");
	puts("Kac oyun oynanmasini istiyorsunuz?");
	scanf("%d", &oyun_sayisi);
	puts("Simulasyonu baþlatmak için 1'e basiniz");
	scanf("%d", &basla);
	
	
	if(basla == 1)
	for(i=0;i<=oyun_sayisi;i++)
	play_game();
	
	printf("Kazanma Sayisi = %d\nKaybetme Sayisi = %d\n", win, lose);
	
	return 0;
	
}

void play_game(void)
{
		
		
		int zar2, zar1,i,j;
		zar2 = rand1_6();
		printf("Atiginiz zar:%d\n", zar2);
		switch (zar2)
		{
			case 7:
			case 11:
				puts("Kazandiniz!!");
			win++;
			break;
			
			case 2:
			case 3:
			case 12:
				puts("Kaybettiniz!!");
			lose++;
			break;
			
			default:
			while(1)
			{
				zar1 = rand1_6();
				if(zar2 == zar1)
				{
					puts("Kazandiniz!!");
					win++;
					break;
				}
				else if(zar1 == 7)
				{
					puts("Kaybettiniz!!");
					lose++;
					break;
				}
				else;
			}
				
		}
		
	}
	

