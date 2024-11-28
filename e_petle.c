#include <stdio.h>

int main(void) {
    // Deklaracja zmiennych
    int i;                // zmienna do pętli for
    int liczba = 0;       // zmienna do pętli while
    int suma = 0;         // zmienna do sumowania wartości

    // Pętla for - wypisanie liczb od 1 do 5
    printf("Pętla for:\n");
    for (i = 1; i <= 5; i++) {
        printf("Liczba: %d\n", i);
    }

    // Pętla while - sumowanie liczb do wartości podanej przez użytkownika
    printf("\nPętla while (podaj liczby, wpisz 0 aby zakończyć):\n");
    while (1) {
        printf("Podaj liczbę: ");
        scanf("%d", &liczba);

        // Instrukcja if do sprawdzania, czy zakończyć pętlę
        if (liczba == 0) {
            break; // zakończenie pętli
        }

        suma += liczba;
    }
    printf("Suma podanych liczb: %d\n", suma);

    // Pętla do-while - sprawdzanie poprawności wpisanej liczby
    int poprawnaLiczba;
    do {
        printf("\nPętla do-while: podaj liczbę większą od 10: ");
        scanf("%d", &poprawnaLiczba);
    } while (poprawnaLiczba <= 10); // powtarzaj, aż liczba będzie > 10

    printf("Brawo! Wpisałeś liczbę %d, która jest większa od 10.\n", poprawnaLiczba);

    return 0;
}
