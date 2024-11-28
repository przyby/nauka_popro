#include <stdio.h>

int main() {
const int MAX_ROZM_TAB = 20;
char tab[MAX_ROZM_TAB];
printf("Podaj napis (maksymalnie %d znaków):\n", MAX_ROZM_TAB - 1);
scanf("%19s", tab); // MAX_ROZM_TAB - 1, żeby zostawić miejsce na '\0'
printf("Wczytano napis: %s\n", tab);
}