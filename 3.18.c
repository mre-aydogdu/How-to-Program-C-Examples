#include <stdio.h>
#include <stdbool.h>

int main() {
  float sales, commission, maas;

  while(true) {
    printf( "Satislari giriniz (Bitirmek icin -1): " );
    scanf( "%f", &sales );

    if ( sales == -1 ) {
      return 0;
    }

    commission = sales / 100 * 9;
    maas = commission + 200;

    printf( "Maas: %.2f\n", maas );
  }
  return 0;
  
}
