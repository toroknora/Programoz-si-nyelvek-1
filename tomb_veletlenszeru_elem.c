#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int choice(const int n, const int tomb[]) {
    int random_index = rand() % n;
    
    return tomb[random_index];
}

int main() {
    // Példa tömb
    int szamok[] = {10, 20, 30, 40, 50};
    int meret = 5;

    srand(time(NULL));

    int valasztott = choice(meret, szamok);
    
    printf("A választott véletlen elem: %d\n", valasztott);

    return 0;
}