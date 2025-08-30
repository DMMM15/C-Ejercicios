#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1;  // long long para valores grandes

    printf("Ingresa un numero entero positivo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("El factorial no esta definido para negativos.\n");
    } else {
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("El factorial de %d es %lld\n", n, factorial);
    }

    return 0;
}
