#include <stdio.h>

int main() {

    int n;

    printf("Adj egy pozitív egész számot:");
    scanf("%d", &n);

    for(int i = 1; i <= n; ++i) {
        if (i %4 == 0){
            printf("%d\n", i);
        }
    }
    printf("\n");

    return 0;
}