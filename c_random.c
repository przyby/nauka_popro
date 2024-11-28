#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    // Seed dla generatora liczb losowych (zalecane dla różnych wyników)
    srand ( time( NULL ) );

    // Poprawne skalowanie
    int wyn = (rand() / (double)(RAND_MAX+1.0) * 6 + 1);

    //lub 

    int wyn1 = rand() % 6 + 1; //wylosuje z [1-6] a nie [1-7]!

    printf("Rzuciłeś: %d lub %d\n", wyn, wyn1);
    return 0;
}