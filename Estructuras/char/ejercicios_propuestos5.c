#include <stdio.h>

int main() {
    char c;
    printf("Ingresa un caracter: ");
    scanf(" %c", &c);

    if (c == '0' || c == '1' || c == '2' || c == '3' || c == '4' ||
        c == '5' || c == '6' || c == '7' || c == '8' || c == '9') {
        printf("Es un digito numerico.\n");
    } else {
        printf("No es un digito numerico.\n");
    }

    return 0;
}
