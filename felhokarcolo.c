#include <stdio.h>
#include <stdlib.h> 

int magassagkul(int tomb[], int meret) {
    int osszeg = 0;
    for (int i = 0; i < meret - 1; i++) {
        osszeg += abs(tomb[i] - tomb[i + 1]);
    }
    return osszeg;
}

int main() {
    int felhokarcolok[] = {2, 4, 8, 3, 9, 7, 1};
    int meret = sizeof(felhokarcolok) / sizeof(felhokarcolok[0]);

    int osszeg = magassagkul(felhokarcolok, meret);
    printf("A szomszédos felhőkarcolók magasságkülönbségének összege: %d\n", osszeg);

    return 0;
}