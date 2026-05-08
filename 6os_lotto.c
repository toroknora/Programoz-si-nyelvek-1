#include <stdio.h>

#define SZAMOK 6
#define OSSZEG 90
#define SZORZAT 996300

int szamok[SZAMOK];

void keres(int index, int start, int aktualis_osszeg, long aktualis_szorzat) {
    if (index == SZAMOK) {
        if (aktualis_osszeg == OSSZEG && aktualis_szorzat == SZORZAT) {
            printf("A nyeroszamok: ");
            for (int i = 0; i < SZAMOK; i++) printf("%d ", szamok[i]);
            printf("\n");
        }
        return;
    }
    if (aktualis_osszeg > OSSZEG || aktualis_szorzat > SZORZAT) return;

    // 3. Rekurzív lépés
    for (int i = start; i <= 45; i++) {
        szamok[index] = i;
        keres(index + 1, i + 1, aktualis_osszeg + i, aktualis_szorzat * i);
    }
}

int main() {
    keres(0, 1, 0, 1);
    return 0;
}