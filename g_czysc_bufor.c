#include <stdio.h>
#include <stdbool.h>

// Funkcja czyszcząca bufor wejściowy
void wyczyscBuf(void) {
    char c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}

// Funkcja do pobierania liczby całkowitej z zabezpieczeniem
int wczytajDodatniInt(void) {
    int liczba = -1;
    printf("Podaj dodatnią liczbę całkowitą: ");
    if (scanf("%d", &liczba) != 1 || liczba <= 0) {
        wyczyscBuf(); // Wyczyść bufor, jeśli wprowadzono błędne dane
        return -1;    // Zwróć -1 w przypadku błędu
    }
    wyczyscBuf(); // Wyczyść bufor, jeśli wpisano poprawne dane
    return liczba;
}

int main(void) {
    int liczba;
    bool poprawneDane = false;

    // Pętla do wprowadzania poprawnych danych
    while (!poprawneDane) {
        liczba = wczytajDodatniInt();

        if (liczba == -1) {
            printf("Błąd: Podano niepoprawne dane. Spróbuj ponownie.\n");
        } else {
            printf("Podano poprawną liczbę: %d\n", liczba);
            poprawneDane = true; // Wyjście z pętli
        }
    }

    return 0;
}
