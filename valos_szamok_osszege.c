#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp = fopen("valos_szamok.txt", "r");

    if (fp == NULL) {
        fprintf(stderr, "Hiba! A valos_szamok.txt fajl nem talalhato.\n");
        return 1;
    }

    double osszeg = 0.0;
    double aktualis_szam;

    while (fscanf(fp, "%lf", &aktualis_szam) != EOF) {
        osszeg += aktualis_szam;
    }

    printf("%.20f\n", osszeg);

    fclose(fp);

    return 0;
}