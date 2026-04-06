#include <stdio.h>

void csere(int tomb[], int meret) {
    for (int i = 0; i < meret; i++) {
        if (tomb[i] < 0) {
            tomb[i] = -tomb[i];
        }
    }
}

void kiir(int tomb[], int meret) {
    for (int i = 0; i < meret; i++) {
        printf("%d ", tomb[i]);
    }
    printf("\n");
}

int main() {
    int tomb[] = {8, -5, 7, -2, 0, -11};
    int meret = sizeof(tomb) / sizeof(tomb[0]);

    printf("Eredeti:\n");
    kiir(tomb, meret);
    csere(tomb, meret);

    printf("Módosított:\n");
    kiir(tomb, meret);

    return 0;
}