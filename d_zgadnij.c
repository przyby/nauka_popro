#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ( void ) {
      const int MAX_LICZBA = 10;
      srand ( time( NULL ) );
      int los = rand() % MAX_LICZBA +1;
      int odp = 0;
      do {
         printf ( "Pod. liczbe od 1 do %d:", MAX_LICZBA );
         scanf( "%d", &odp );
      } while ( odp != los );
      puts( "Zgadles!" );

      return 0;
}