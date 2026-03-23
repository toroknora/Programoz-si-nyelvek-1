#include <stdio.h>

int main(){
    int n;

    printf("Írj egy számot:");
    scanf("%d", &n);

    for(int i = 1; i <= n; ++i) {
         if(i < n) {
        printf("%d -> ", i);
         }
         else {
            printf("%d", i);
         }

        }
          printf("\n");
    
    return 0;
}