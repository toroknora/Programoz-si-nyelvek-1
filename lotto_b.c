#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int hasonlit(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n, also, felso;
    printf("Hány db random számot kérsz? ");
    scanf("%d", &n);
    printf("Alsó határ: ");
    scanf("%d", &also);
    printf("Felső határ: ");
    scanf("%d", &felso);

    int szamok[n];
    srand(time(NULL));

    for (int i = 0; i < n; i++) {
        szamok[i] = rand() % (felso - also + 1) + also;
    }

    qsort(szamok, n, sizeof(int), hasonlit);

    printf("A generált számok: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", szamok[i]);
    }
    printf("\n");

    return 0;
}