#include <stdio.h>

// Deklaracje funkcji
int wczytajTab(int tab[], int rozmTab);
void wypiszTab(int tab[], int ileEl);
void zamien(int* el1, int* el2);
void sortujBabelkowo(int tab[], int ileEl);

int main(void) {
    const int ROZM_TAB = 20;
    int dane[ROZM_TAB]; // Tablica do przechowywania danych
    int rozmTab = wczytajTab(dane, ROZM_TAB); // Wczytywanie danych
    sortujBabelkowo(dane, rozmTab); // Sortowanie tablicy
    wypiszTab(dane, rozmTab); // Wypisywanie posortowanej tablicy
    return 0;
}

// Funkcja wczytująca dane do tablicy
int wczytajTab(int tab[], int rozmTab) {
    printf("Ile elementów podać (max %d): ", rozmTab);
    int ileEl = 0;
    scanf("%d", &ileEl);
    
    // Sprawdzanie, czy użytkownik podał poprawną liczbę elementów
    if (ileEl > rozmTab) {
        printf("Liczba elementów nie może przekroczyć %d!\n", rozmTab);
        ileEl = rozmTab;
    }

    printf("Podaj %d elementów typu int:\n", ileEl);
    for (int i = 0; i < ileEl; ++i) {
        scanf("%d", &tab[i]);
    }
    return ileEl; // Zwracamy liczbę wczytanych elementów
}

// Funkcja do zamiany dwóch elementów w tablicy
void zamien(int* el1, int* el2) {
    int temp = *el1;
    *el1 = *el2;
    *el2 = temp;
}

// Funkcja sortująca tablicę za pomocą algorytmu bąbelkowego
void sortujBabelkowo(int tab[], int ileEl) {
    for (int i = ileEl - 1; i > 0; --i) {
        for (int j = 0; j < i; ++j) {
            if (tab[j + 1] < tab[j]) {
                zamien(&tab[j], &tab[j + 1]); // Zamiana miejscami
            }
        }
    }
}

// Funkcja wypisująca tablicę na ekranie
void wypiszTab(int tab[], int ileEl) {
    printf("Tablica po posortowaniu:\n");
    for (int i = 0; i < ileEl; ++i) {
        printf("%d, ", tab[i]);
    }
    putchar('\n');
}
