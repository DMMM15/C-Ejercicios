#include <stdio.h>

int main() {
    char c;
    printf("Ingresa una letra minuscula: ");
    scanf(" %c", &c);

    //utilice el switch para que saliera un poco más ordenado y se pueda entender mejor.
    switch (c) {
        case 'a': c = 'A'; break;
        case 'b': c = 'B'; break;
        case 'c': c = 'C'; break;
        case 'd': c = 'D'; break;
        case 'e': c = 'E'; break;
        case 'f': c = 'F'; break;
        case 'g': c = 'G'; break;
        case 'h': c = 'H'; break;
        case 'i': c = 'I'; break;
        case 'j': c = 'J'; break;
        case 'k': c = 'K'; break;
        case 'l': c = 'L'; break;
        case 'm': c = 'M'; break;
        case 'n': c = 'N'; break;
        case 'o': c = 'O'; break;
        case 'p': c = 'P'; break;
        case 'q': c = 'Q'; break;
        case 'r': c = 'R'; break;
        case 's': c = 'S'; break;
        case 't': c = 'T'; break;
        case 'u': c = 'U'; break;
        case 'v': c = 'V'; break;
        case 'w': c = 'W'; break;
        case 'x': c = 'X'; break;
        case 'y': c = 'Y'; break;
        case 'z': c = 'Z'; break;
        default: 
            printf("No es una letra minuscula.\n");
            return 0;
    }

    printf("En mayuscula: %c\n", c);
    return 0;
}
