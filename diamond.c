#include <stdio.h>

int main() {
    int magassag;

    printf("Magassag: ");
    scanf("%d", &magassag);

    if (magassag <= 0 || magassag % 2 == 0) {
        printf("Hiba! csak pozitív páratlan szám adható meg!\n");
        return 1;
    }
     int fel = magassag / 2;
    for (int i = 0; i <= fel; i++) {
        for (int j = 0; j < fel - i; j++) {  
        printf(" ");
        }

        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }

        printf("\n");
    }
    for (int i = fel - 1; i >= 0; i--) {
      for (int j = 0; j < fel - i; j++) {
            printf(" ");
        }

        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }

        printf("\n");
            }

    return 0;
}