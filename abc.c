#include <stdio.h>

#define SIZE 26

void feltolt(char tomb[]){
    for (char c = 'a'; c<='z'; c++){
        tomb[c - 'a'] = c;
    }
    tomb[SIZE] = '\0';
}
int main(){
    charabc[SIZE + 1];
    feltolt(abc);
    puts("Az angol abc:");
    printf("%s\n", abc);

    return 0;
}