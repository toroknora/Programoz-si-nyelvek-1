#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle_password(char *s, int n) {
    for (int i = n - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        char tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
    }
}

int main() {
    srand(time(NULL));

    int hossz = rand() % (12 - 8 + 1) + 8;
    char jelszo[13];

    jelszo[0] = (rand() % (122 - 97 + 1)) + 97;
    jelszo[1] = (rand() % (90 - 65 + 1)) + 65;  
    jelszo[2] = (rand() % (57 - 48 + 1)) + 48;  
  
    char spec[] = ".,;'";
    jelszo[3] = spec[rand() % 4];

    for (int i = 4; i < hossz; i++) {
        int tipus = rand() % 3;
        if (tipus == 0) jelszo[i] = (rand() % (122 - 97 + 1)) + 97;
        else if (tipus == 1) jelszo[i] = (rand() % (90 - 65 + 1)) + 65;
        else jelszo[i] = (rand() % (57 - 48 + 1)) + 48;
    }

    jelszo[hossz] = '\0';

    shuffle_password(jelszo, hossz);

    printf("%s\n", jelszo);

    return 0;
}