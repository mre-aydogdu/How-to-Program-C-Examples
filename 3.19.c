#include <stdio.h>
#include <stdbool.h>

int main() {
  float anapara, oran, gun, faiz;

  while(true) {
    printf( "Ana Parayi Girin (Bitirmek icin -1): " );
    scanf( "%f", &anapara );

    if ( anapara == -1 ) {
      return 0;
    }
    	printf("Faiz Oranini Grin:");
    	scanf("%f", &oran);
    	printf("Kredi dönemini girin:(gün)");
    	scanf("%f", &gun);
    	faiz = anapara * oran * gun / 365;
    	
    	


    printf( "Faiz Miktari: %.2f\n", faiz );
  }
scanf("");
  return 0;
  
}
