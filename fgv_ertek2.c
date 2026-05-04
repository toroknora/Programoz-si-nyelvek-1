#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    int min;
    int max;
    double atlag;
} Statisztika;

Statisztika keszit_statisztika(int tomb[], int meret) {
    Statisztika s;
    
    s.min = tomb[0];
    s.max = tomb[0];
    int osszeg = 0;

    for (int i = 0; i < meret; i++) {
        if (tomb[i] < s.min) s.min = tomb[i];
        if (tomb[i] > s.max) s.max = tomb[i];
        osszeg += tomb[i];
    }
    
    s.atlag = (double)osszeg / meret;
    
    return s; 
}

int main() {
    int szamok[10];

    srand(time(NULL));

    printf("A tomb elemei: ");
    for (int i = 0; i < 10; i++) {
        szamok[i] = rand() % 90 + 10;
        printf("%d%s", szamok[i], (i == 9 ? "" : ", "));
    }
    printf("\n");

    Statisztika eredmeny = keszit_statisztika(szamok, 10);

    printf("Legkisebb elem: %d\n", eredmeny.min);
    printf("Legnagyobb elem: %d\n", eredmeny.max);
    printf("Az elemek atlaga: %.1f\n", eredmeny.atlag);

    return 0;
}