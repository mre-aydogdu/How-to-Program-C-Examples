#include <stdio.h>

int main() {
  int x;

  x = 5;
  printf( "�nceden azaltma 5: \n" );
  printf( "%d\n", x );
  printf( "%d\n", --x );
  printf( "%d\n", x );

  x = 5;
  printf( "Sonradan azaltma 5: \n" );
  printf( "%d\n", x );
  printf( "%d\n", x-- );
  printf( "%d\n", x );

system("pause");
  return 0;
  
}
