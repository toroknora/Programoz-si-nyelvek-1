#include <stdio.h>

int legkisebb(int tomb[], int meret) {
    int min = tomb[0];
    for (int i = 1; i < meret; i++) {
        if (tomb[i] < min) {
            min = tomb[i];
        }
    }
    return min;
}

int legnagyobb(int tomb[], int meret) {
    int max = tomb[0];
    for (int i = 1; i < meret; i++) {
        if (tomb[i] > max) {
            max = tomb[i];
        }
    }
    return max;
}

int main() {
    int tomb[] = {11, 8, 9, 10, 7};
    int meret = sizeof(tomb) / sizeof(tomb[0]);

    printf("Legkisebb: %d\n", legkisebb(tomb, meret));
    printf("Legnagyobb: %d\n", legnagyobb(tomb, meret));

    return 0;
}