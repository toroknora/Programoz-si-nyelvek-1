#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *be, *ki;
    double szam;
    int darab = 0;

    be = fopen("in.txt", "r");
    if (be == NULL) {
        fprintf(stderr, "Hiba: Az in.txt nem nyitható meg!\n");
        return 1;
    }
    printf("# in.txt sikeresen megnyitva\n");

    ki = fopen("out.txt", "w");
    if (ki == NULL) {
        fprintf(stderr, "Hiba: Az out.txt nem hozható létre!\n");
        fclose(be);
        return 1;
    }

    printf("# 0,5-nél nagyobb számok szűrése...\n");
    
    while (fscanf(be, "%lf", &szam) != EOF) {
        if (szam > 0.5) {
            fprintf(ki, "%f\n", szam);
            darab++;
        }
    }

    printf("# szűrés vége\n");

    fclose(be);
    fclose(ki);
    printf("# out.txt bezárva\n");

    printf("# out.txt-be kiírt számok mennyisége: %d db\n", darab);

    return 0;
}