#include <stdio.h>
#include <stdbool.h>

#define CELLAK 600

int main() {
    bool cellak[CELLAK + 1];

    for (int i = 1; i <= CELLAK; i++) {
        cellak[i] = false;
    }

    for (int lepes = 1; lepes <= CELLAK; lepes++) {
        for (int j = lepes; j <= CELLAK; j += lepes) {
            cellak[j] = !cellak[j];
        }
    }

    printf("A szabadon távozok cellaszámai:\n");
    int count = 0;
    for (int i = 1; i <= CELLAK; i++) {
        if (cellak[i]) {
            printf("%d ", i);
            count++;
        }
    }

    printf("\n\nÖsszesen %d fogoly szabadul.\n", count);

    return 0;
}