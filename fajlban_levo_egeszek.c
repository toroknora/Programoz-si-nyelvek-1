#include <stdio.h>
#include <stdlib.h>

int hasonlit(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    const char *fajlnev = "1000.txt"; 
    FILE *f = fopen(fajlnev, "r");

    if (f == NULL) {
        fprintf(stderr, "Hiba! A(z) %s nem talalhato a program mellett.\n", fajlnev);
        return 1;
    }

    int szamok[1100]; 
    int db = 0;

    while (fscanf(f, "%d", &szamok[db]) != EOF) {
        db++;
    }
    fclose(f);

    qsort(szamok, db, sizeof(int), hasonlit);

    for (int i = 0; i < db; i++) {
        printf("%d\n", szamok[i]);
    }

    return 0;
}