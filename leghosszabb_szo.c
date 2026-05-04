#include <stdio.h>
#include <string.h>

#define BUFSIZE 200

int main(){
    char szo[BUFSIZE];
    int szamlalo = 0;
    int max_hossz = -1;

    puts("Adj meg szavakat'*' végjelig!");
    while (1){
        printf("Szó:");
        fgets(szo, BUFSIZE, stdin);
        szo[strlen(szo)-1] = '\0';
        if(strcmp(szo, "*") == 0){
            break;
        }
        szamlalo++;
        int hossz = strlen(szo);
        if(hossz > max_hossz){
            max_hossz = hossz;
        }
    }
    printf("%d db szót adtál meg. A leghosszabb %d karakterből áll.\n", szamlalo, max_hossz);

    return 0;
}