#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        fprintf(stderr, "%s sorok száma, minimum hossz, maximum hossz\n", argv[0]);
        return 1;
    }

    int sorok_szama = atoi(argv[1]);
    int min_hossz = atoi(argv[2]);
    int max_hossz = atoi(argv[3]);

    srand(time(NULL));

    for (int i = 0; i < sorok_szama; i++) {
        int aktualis_hossz = rand() % (max_hossz - min_hossz + 1) + min_hossz;

        for (int j = 0; j < aktualis_hossz; j++) {
            char c;
            if (j == aktualis_hossz - 1) {
                c = (rand() % (126 - 33 + 1)) + 33;
            } else {
                c = (rand() % (126 - 32 + 1)) + 32;
            }
            putchar(c);
        }
        putchar('\n');
    }

    return 0;
}