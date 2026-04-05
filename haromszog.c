#include <stdio.h>
#include <stdbool.h>

bool valid_triangle(double a, double b, double c);

int main() {
    double x, y, z;

    printf("Kérem a háromszög oldalait: ");

    if (scanf("%lf %lf %lf", &x, &y, &z) != 3) {
        printf("Hiba: Kerlek szamokat adj meg!\n");
        return 1;
    }

    if (valid_triangle(x, y, z)) {
        printf("Igen, a %.f, %.f es %.f oldalakból szerkeszthető háromszög.\n", x, y, z);
    } else {
        printf("Nem, ezekből az oldalakból nem szerkeszthető háromszög.\n");
    }

    return 0;
}

bool valid_triangle(double a, double b, double c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        return false;
    }

    return (a + b > c) && (a + c > b) && (b + c > a);
}