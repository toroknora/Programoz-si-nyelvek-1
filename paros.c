#include <stdio.h>

int is_even(int n) {
    return n % 2 == 0;
}

int main() {
    printf("%d\n", is_even(4));
    return 0;
}