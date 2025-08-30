#include <stdio.h>

int main() {
    double base, resultado = 1.0;
    int exponente;

    printf("Ingresa la base: ");
    scanf("%lf", &base);
    printf("Ingresa el exponente (entero): ");
    scanf("%d", &exponente);

    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }

    printf("%.6lf elevado a %d es: %.6lf\n", base, exponente, resultado);

    return 0;
}
