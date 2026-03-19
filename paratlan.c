#include <stdio.h>

    int main() {
        int n;
      printf("Adj egy számot:");
        scanf("%d", &n);
        if (n % 2== 0){
            n--;
        }
    for (int i = n; i >= 1; i-= 2){
            printf("%d\n", i);

        }
    
    return 0;
    }