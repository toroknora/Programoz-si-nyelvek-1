#include <stdio.h>

int main() {

    int osszeg = 0;
    for (int i = 1; i<=100; ++i){
        osszeg +=i;
    }
    printf("A számok összege 1-től 100-ig: %d/n", osszeg);

    return 0;
} 