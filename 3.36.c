#include <stdio.h>
int counter = 0;
int a, b, c, d, e, n;

int main() {
  printf( "Bes basamakli bir sayi giriniz:\n" );
  scanf("%d", &n );

  a = n % 10;
  b = n / 10 % 10;
  c = n / 100 % 10;
  d = n / 1000 % 10;
  e = n / 10000;

  if ( a == 7 ) {
    counter++;
  }
  if ( b == 7 ) {
    counter++;
  }
  if ( c == 7 ) {
    counter++;
  }
  if ( d == 7 ) {
    counter++;
  }
  if ( e == 7 ) {
    counter++;
  }

  printf( "%d sayisinda %d tane 7 var\n", n, counter );
  system("pause");
  return 0;
}
