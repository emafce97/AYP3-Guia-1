#include <stdio.h>

// A partir de un listado de números, determinar el máximo.

int main() {
    int numeros[] = {12, 2, 3, 4, 11, 6, 547, 8, 9};
    int max = numeros[0];
    for (int i = 1; i < sizeof(numeros) / sizeof(int); i++) {
        if (numeros[i] > max) {
            max = numeros[i];
        }
    }
    printf("Máximo: %d", max);
    return 0;
}