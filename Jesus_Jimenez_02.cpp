#include <stdio.h>

int main() {
    int numero;

    // Solicitar al usuario que ingrese un número entero
    printf("Ingrese un número entero: ");
    scanf("%d", &numero);

    // Verificar si el número es par o impar
    if (numero % 2 == 0) {
        printf("%d es un número par.\n", numero);
    } else {
        printf("%d es un número impar.\n", numero);
    }

    return 0;
}
