#include "prog1.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void kiir(string msg, int n, int tomb[]){
    printf("%s", msg);
    for (int i = 0; i< n; i++){
        if (i> 0){
            printf(", ");
        }
        printf("%d", tomb[i]);
    }
    puts("");
}
int main(){
    int n;
    puts ("Hány db számot szeretnél bevinni?");
    scanf("%d", &n);

    int eredeti[n];

    for(int i = 0; i < n; i++){
        masolat[k] = abs(eredeti[k]);
    }
    kiir("A bevittszamok abszolútértékei: ", n, masolat);
    kiir("A megadott számok:", n, eredeti);

    return 0;
}