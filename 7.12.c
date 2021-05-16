#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SUITS 4
#define FACES 13
#define CARDS 52

void shuffle(unsigned int wDeck[][FACES]);
void deal(unsigned int wDeck[][FACES], const char *wFace[], const char *wSuit[]);

int main()

{
	unsigned int deck[SUITS][FACES] = {0};
	srand(time(NULL));
	shuffle(deck);
	
	const char *suit[SUITS] = {"Hearts", "Diamonds", "Clubs", "Spades"};
	const char *face[FACES]= {"Ace", "Deuce", "Three", "Four",
							"Five", "Six", "Seven", "Eight",
							"Nine", "Ten", "Jack", "Queen", "King"};
	
	deal(deck, face ,suit);
	
}

void shuffle(unsigned int wDeck[][FACES])
{
	int card, row, column;
	
	for(card=1;card<=CARDS;card++)
	{
		do{
		
		row = rand() %SUITS;
		column = rand() %FACES;
	}while(wDeck[row][column] != 0);
	
	wDeck[row][column] = card;
	}
}

void deal(unsigned int wDeck[][FACES], const char *wFace[], const char *wSuit[])
{
	int card, row,column;
	for(card=1;card<=5;++card)
	{
		for(row=0; row < SUITS; ++row)
		{
			for(column=0; column < FACES; ++column)
			{
				if(wDeck[row][column] == card)
				printf("%5s of %-8s%c", wFace[column], wSuit[row],
				card % 2 == 0 ? '\n' : '\t');
			}
		}
	}	
}


