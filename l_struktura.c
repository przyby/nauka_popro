#include <stdio.h>
#include <math.h>  // do funkcji sqrt() i pow()

// Definicja struktury Punkt
typedef struct Punkt {
    float x;
    float y;
} Punkt;

// Funkcja obliczająca odległość między dwoma punktami
float obliczOdleglosc(Punkt p1, Punkt p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

// Funkcja wypisująca dane punktu
void wypiszPunkt(Punkt p) {
    printf("Punkt: (%.2f, %.2f)\n", p.x, p.y);
}

int main(void) {
    // Tworzenie dwóch punktów
    Punkt punkt1 = {2.5, 3.0};
    Punkt punkt2 = {5.0, 7.0};

    // Wypisanie punktów
    printf("Pierwszy ");
    wypiszPunkt(punkt1);
    printf("Drugi ");
    wypiszPunkt(punkt2);

    // Obliczenie i wypisanie odległości
    float odleglosc = obliczOdleglosc(punkt1, punkt2);
    printf("Odległość między punktami: %.2f\n", odleglosc);

    return 0;
}
