#include <stdio.h>

void line(char c, int lenght){

    for (int i = 0; i < lenght; i++){
        putchar(c);
    }
    puts("");
}
int main(){
    printf("hello\n");
    line('-', 40);
    printf("world\n");

    return 0;
}