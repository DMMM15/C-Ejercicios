#include <stdio.h>

int main() {
    int a, b, c, mayor;

    printf("Ingresa tres numeros enteros: ");
    scanf("%d %d %d", &a, &b, &c);

    mayor = a;
    if (b > mayor) mayor = b;
    if (c > mayor) mayor = c;

    printf("El mayor es: %d\n", mayor);

    return 0;
}
