#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, also, felso;

    printf("Hány db random számot kérsz?\n");
    scanf("%d", &n);

    printf("Alsó határ: ");
    scanf("%d", &also);

    printf("Felső határ (zárt intervallum): ");
    scanf("%d", &felso);

    srand(time(NULL));

    printf("\nA generált számok: ");

    for (int i = 0; i < n; i++) {
        int random_szam = rand() % (felso - also + 1) + also;
        printf("%d ", random_szam);
    }

    printf("\n");

    return 0;
}