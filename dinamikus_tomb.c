#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *adat;    
    int meret;    
    int kapacitas;
} DinamikusTomb;

void tomb_init(DinamikusTomb *tomb) {
    tomb->meret = 0;
    tomb->kapacitas = 10;
    tomb->adat = (int *)malloc(tomb->kapacitas * sizeof(int));
    if (tomb->adat == NULL) {
        perror("Memoriafoglalasi hiba");
        exit(1);
    }
}

void tomb_hozzaad(DinamikusTomb *tomb, int ertek) {
    if (tomb->meret == tomb->kapacitas) {
        tomb->kapacitas *= 2;
        tomb->adat = (int *)realloc(tomb->adat, tomb->kapacitas * sizeof(int));
        if (tomb->adat == NULL) {
            perror("Memoria ujrafoglasi hiba");
            exit(1);
        }
    }
    tomb->adat[tomb->meret++] = ertek;
}

int hasonlit(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    DinamikusTomb tomb;
    tomb_init(&tomb);

    FILE *fp = fopen("millions.txt", "r");
    if (fp == NULL) {
        perror("Hiba a fajl megnyitasakor. Ellenorizd a fajlnevet!");
        free(tomb.adat);
        return 1;
    }

    int szam;
    while (fscanf(fp, "%d", &szam) == 1) {
        tomb_hozzaad(&tomb, szam);
    }
    fclose(fp);

    printf("Beolvasva: %d szam.\n", tomb.meret);

    if (tomb.meret > 0) {
        printf("Rendezes folyamatban...\n");
        qsort(tomb.adat, tomb.meret, sizeof(int), hasonlit);
        printf("Rendezes kesz.\n");

        printf("\nElso 10 elem:\n");
        for (int i = 0; i < (tomb.meret < 10 ? tomb.meret : 10); i++) {
            printf("%d ", tomb.adat[i]);
        }
        
        printf("\n\nUtolso 10 elem:\n");
        for (int i = tomb.meret - 10; i < tomb.meret; i++) {
            if (i >= 0) printf("%d ", tomb.adat[i]);
        }
        printf("\n");
        
    
    }

    free(tomb.adat);

    return 0;
}