#include <stdio.h>
#include <stdbool.h>

bool rend(int tomb[], int meret) {
    for (int i = 0; i < meret - 1; i++) {
        if (tomb[i] > tomb[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int tomb[] = {1, 2, 2, 4, 5};
    int meret = sizeof(tomb) / sizeof(tomb[0]);

    if (rend(tomb, meret)) {
        printf("Rendezett\n");
    } else {
        printf("Nem rendezett\n");
    }

    return 0;
}