#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_SOR 100
#define MAX_NEV_HOSSZ 50

void format_name(char *name) {
    if (name[0] != '\0') {
        name[0] = toupper(name[0]);
        for (int i = 1; name[i] != '\0'; i++) {
            name[i] = tolower(name[i]);
        }
    }
}

int compare(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main() {
    FILE *fp = fopen("nevek.csv", "r");
    if (fp == NULL) {
        perror("Hiba a fájl megnyitásakor");
        return 1;
    }

    char line[100];
    char *pti_nevek[MAX_SOR];
    int count = 0;

    while (fgets(line, sizeof(line), fp) && count < MAX_SOR) {
        line[strcspn(line, "\r\n")] = 0;

        char *nev = strtok(line, ",");
        char *kor = strtok(NULL, ",");
        char *szak = strtok(NULL, ",");

        if (nev && szak) {
            if (strcasecmp(szak, "pti") == 0) {
                pti_nevek[count] = strdup(nev);
                format_name(pti_nevek[count]);
                count++;
            }
        }
    }
    fclose(fp);

    qsort(pti_nevek, count, sizeof(char *), compare);

    for (int i = 0; i < count; i++) {
        printf("%s%s", pti_nevek[i], (i < count - 1) ? ", " : "");
        free(pti_nevek[i]);
        }
    printf("\n");

    return 0;
}