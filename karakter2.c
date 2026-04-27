#include "prog1.h"
#include <stdio.h>
#include <string.h>

int char_count(const string s, char c){
    int counter = 0;
    int hossz = strlen(s);

    for (int i = 0; i < hossz; i++){
        if (s[i] == c){
            counter++;
        }
    }
    return counter;
}
int main(){
    printf("%d\n", char_count("Abba", 'b'));
    printf("%d\n", char_count("Abba", 'a'));
    printf("%d\n", char_count("Abba", 'x'));

    return 0;
}