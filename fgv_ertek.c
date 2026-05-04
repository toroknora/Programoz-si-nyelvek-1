#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void statisztika(int tomb[], int meret, int *min, int *max, double *atlag) {
    *min = tomb[0];
    *max = tomb[0];
    int osszeg = 0;

    for (int i = 0; i < meret; i++) {
        if (tomb[i] < *min) *min = tomb[i];
        if (tomb[i] > *max) *max = tomb[i];
        osszeg += tomb[i];
    }
    *atlag = (double)osszeg / meret;
}

int main() {
    int szamok[10];
    int minimum, maximum;
    double atlagos_ertek;

    srand(time(NULL));

    printf("A tomb elemei: ");
    for (int i = 0; i < 10; i++) {
        szamok[i] = rand() % 90 + 10; 
        printf("%d%s", szamok[i], (i == 9 ? "" : ", "));
    }
    printf("\n");

    statisztika(szamok, 10, &minimum, &maximum, &atlagos_ertek);

    printf("Legkisebb elem: %d\n", minimum);
    printf("Legnagyobb elem: %d\n", maximum);
    printf("Az elemek atlaga: %.1f\n", atlagos_ertek);

    return 0;
}