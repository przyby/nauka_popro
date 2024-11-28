#include <stdio.h>

int main(void) {
    int a, b;

    printf("Podaj dwie liczby całkowite: ");
    scanf("%d %d", &a, &b);

    while (b != 0) {
        int temp = b; // Zachowaj wartość b
        b = a % b;    // Przypisz resztę z dzielenia
        a = temp;     // Przypisz wartość b do a
    }

    printf("Największy wspólny dzielnik: %d\n", a);

    return 0;
}
