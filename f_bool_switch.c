#include <stdio.h>
#include <stdbool.h>

int main(void) {
    bool kontynuuj = true; // Flaga do sterowania pętlą
    int wybor;

    while (kontynuuj) {
        printf("\nMenu:\n");
        printf("1. Powitaj użytkownika\n");
        printf("2. Wyświetl informację\n");
        printf("3. Zakończ program\n");
        printf("Wybierz opcję: ");
        scanf("%d", &wybor);

        switch (wybor) {
            case 1:
                printf("Witaj, użytkowniku!\n");
                break;
            case 2:
                printf("To jest prosty program w C.\n");
                break;
            case 3:
                printf("Koniec programu. Do zobaczenia!\n");
                kontynuuj = false; // Ustaw flagę na false, aby zakończyć pętlę
                break;
            default:
                printf("Niepoprawny wybór. Spróbuj ponownie.\n");
                break;
        }
    }

    return 0;
}
