#include <stdio.h>

int main() {
    int n;
    printf("Ingresa un numero entero: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("El numero es par.\n");
    else
        printf("El numero es impar.\n");

    return 0;
}
