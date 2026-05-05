#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle(int n, int tomb[]) {
    for (int i = n - 1; i > 0; i--) {
        int j = rand() % (i + 1);

        int seged = tomb[i];
        tomb[i] = tomb[j];
        tomb[j] = seged;
    }
}

int main() {
    int li[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(li) / sizeof(li[0]);

    srand(time(NULL));

    printf("Eredeti tömb: ");
    for (int i = 0; i < n; i++) printf("%d ", li[i]);
    printf("\n");

    shuffle(n, li);

    printf("Kevert tömb:  ");
    for (int i = 0; i < n; i++) printf("%d ", li[i]);
    printf("\n");

    return 0;
}