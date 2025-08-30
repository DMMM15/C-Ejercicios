#include <stdio.h>

int main() {
    double num, suma = 0.0;

    for (int i = 1; i <= 5; i++) {
        printf("Ingresa el numero %d: ", i);
        scanf("%lf", &num);
        suma += num;
    }

    printf("El promedio es: %.6lf\n", suma / 5);

    return 0;
}
