#include <stdio.h>

int main() {
    int num1, num2, num3, num4, mayor;

    // Solicitar al usuario que ingrese los cuatro n�meros
    printf("Ingrese el primer n�mero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo n�mero: ");
    scanf("%d", &num2);
    printf("Ingrese el tercer n�mero: ");
    scanf("%d", &num3);
    printf("Ingrese el cuarto n�mero: ");
    scanf("%d", &num4);

    // Determinar el mayor de los cuatro n�meros
    mayor = num1; // Suponemos que el primer n�mero es el mayor inicialmente

    if (num2 > mayor) {
        mayor = num2;
    }
    if (num3 > mayor) {
        mayor = num3;
    }
    if (num4 > mayor) {
        mayor = num4;
    }

    // Mostrar el resultado
    printf("El mayor de los cuatro n�meros es: %d\n", mayor);

    return 0;
}
