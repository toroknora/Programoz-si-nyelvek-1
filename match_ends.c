#include "prog1.h"
#include <stdio.h>
#include <string.h>

int match_ends(int n, string words[]);{

    int counter = 0;
    for (int i =0; i< n; i++){
        string szo = words[i];
        int hossz = strlen(szo);
        if((hossz >= 2) && (szo[0] == szo[hossz - 1])){
            counter++
        }
    }
    return counter;
}
int main()
{
    string szavak1[] = { "aba", "xyz", "aa", "x", "bbb" };
    int szavak1_meret = 5;

    int result = match_ends(szavak1_meret, szavak1);
    printf("result: %d\n", result);

    for (int i = 0; i < szavak1_meret; ++i)
    {
        puts(szavak1[i]);
    }

    return 0;
}