#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_valid_c_identifier(const char* input) {
    int hossz = strlen(input);

    if (hossz == 0) {
        return 0;
    }

    if (!isalpha(input[0]) && input[0] != '_') {
        return 0;
    }

    for (int i = 1; i < hossz; i++) {
        if (!isalnum(input[i]) && input[i] != '_') {
            return 0;
        }
    }

    return 1; 
}

int main() {
    char s[100];

    printf("Adj meg sztringeket '*' végjelig!\n");

    while (1) {
        printf("\nInput: ");
        if (scanf("%s", s) != 1) break;

        if (strcmp(s, "*") == 0) {
            break;
        }

        if (is_valid_c_identifier(s)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}