#include <stdio.h>

void tombok(int tomb[], int meret) {
    for (int i = 0; i < meret; i++) {
        printf("%d", tomb[i]);
        if (i < meret - 1) {
            printf(", "); 
        }
    }
    printf("\n");
}

int main() {
    int tomb[] = {4, 7, 34, 23, 67};
    int meret = sizeof(tomb) / sizeof(tomb[0]);

    tombok(tomb, meret);

    return 0;
}