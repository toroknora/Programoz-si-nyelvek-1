#include <stdio.h>
#include <string.h>

const char *C = 
    "#include <stdio.h>\n\n"
    "int main() {\n"
    "    printf(\"Hello C\\n\");\n"
    "    return 0;\n"
    "}\n";

const char *PYTHON = 
    "def main():\n"
    "    print('Hello Python!')\n"
    "\n"
    "if __name__ == '__main__':\n"
    "    main()\n";

const char *JAVA = 
    "public class Main {\n"
    "    public static void main(String[] args) {\n"
    "        System.out.println(\"Hello Java!\");\n"
    "    }\n"
    "}\n";

const char *BASH = 
    "#!/bin/bash\n"
    "echo \"Hello Bash!\"\n";


int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Hasznalat: %s <c | py | java | bash>\n", argv[0]);
        return 1;
    }

    char *tipus = argv[1];
    const char *tartalom = NULL;
    char *fajlnev = NULL;

    if (strcmp(tipus, "c") == 0) {
        tartalom = C;
        fajlnev = "main.c";
    } else if (strcmp(tipus, "py") == 0) {
        tartalom = PYTHON;
        fajlnev = "main.py";
    } else if (strcmp(tipus, "java") == 0) {
        tartalom = JAVA;
        fajlnev = "Main.java";
    } else if (strcmp(tipus, "bash") == 0) {
        tartalom = BASH;
        fajlnev = "script.sh";
    } else {
        printf("Ismeretlen tipus: %s\n", tipus);
        return 1;
    }

    FILE *f = fopen(fajlnev, "w");
    if (f == NULL) {
        perror("Hiba a fájl létrehozásakor");
        return 1;
    }

    fputs(tartalom, f);
    fclose(f);

    printf("Sikeresen létrehozva: %s\n", fajlnev);
    return 0;
}