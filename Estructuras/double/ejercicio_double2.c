#include <stdio.h>

int main() {
    double a, b;
    printf("Ingresa dos numeros: ");
    scanf("%lf %lf", &a, &b);

    printf("La suma es: %.6lf\n", a + b);

    return 0;
}
