#include <stdio.h>

int main() {
    double x;
    printf("Ingresa un numero: ");
    scanf("%lf", &x);

    if (x > 0)
        printf("El numero es positivo.\n");
    else if (x < 0)
        printf("El numero es negativo.\n");
    else
        printf("El numero es cero.\n");

    return 0;
}
