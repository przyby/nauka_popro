#include <stdio.h>

const int MAX_X = 9;  // Maksymalna szerokość ekranu
const int MAX_Y = 9;  // Maksymalna wysokość ekranu
const char PELNE = '*'; // Symbol pełnego punktu
const char PUSTE = ' '; // Symbol pustego punktu

// Funkcje
void czyscEkran(char ekran[MAX_X][MAX_Y]);
void rysPunkt(char ekran[MAX_X][MAX_Y], int x, int y);
void rysEkran(char ekran[MAX_X][MAX_Y]);

int main(void) {
    char ekran[MAX_X][MAX_Y];  // Tworzymy ekran o rozmiarze MAX_X x MAX_Y
    czyscEkran(ekran);  // Czyszczenie ekranu (wypełnienie pustymi znakami)
    
    // Rysowanie punktu na ekranie
    rysPunkt(ekran, 5, 5);  // Rysujemy punkt w pozycji (5, 5)
    
    // Przenoszenie rysunku na konsolę
    rysEkran(ekran);
    
    return 0;
}

// Funkcja czyszcząca ekran - wypełnia ekran pustymi znakami
void czyscEkran(char ekran[MAX_X][MAX_Y]) {
    for (int y = 0; y < MAX_Y; ++y) {
        for (int x = 0; x < MAX_X; ++x) {
            ekran[x][y] = PUSTE;  // Wypełniamy całą tablicę pustymi znakami
        }
    }
}

// Funkcja rysująca punkt na ekranie
void rysPunkt(char ekran[MAX_X][MAX_Y], int x, int y) {
    if (x >= 0 && y >= 0 && x < MAX_X && y < MAX_Y) {  // Sprawdzamy, czy współrzędne są w granicach ekranu
        ekran[x][y] = PELNE;  // Ustawiamy symbol pełnego punktu w odpowiednim miejscu
    }
}

// Funkcja wypisująca ekran na konsoli
void rysEkran(char ekran[MAX_X][MAX_Y]) {
    for (int y = 0; y < MAX_Y; ++y) {  // Przechodzimy przez każdy wiersz
        for (int x = 0; x < MAX_X; ++x) {  // Przechodzimy przez każdą kolumnę
            putchar(ekran[x][y]);  // Wypisujemy symbol na ekranie
        }
        putchar('\n');  // Po każdym wierszu dodajemy nową linię
    }
}
