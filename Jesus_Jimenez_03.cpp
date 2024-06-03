#include <stdio.h>
#include <math.h>

// Función para calcular el área de un cuadrado
void area_cuadrado(float lado) {
    float area = lado * lado;
    printf("El área del cuadrado es: %.2f\n", area);
}

// Función para calcular el área de un triángulo
void area_triangulo(float base, float altura) {
    float area = (base * altura) / 2;
    printf("El área del triángulo es: %.2f\n", area);
}

// Función para calcular el área de un círculo
void area_circulo(float radio) {
    float area = M_PI * pow(radio, 2);
    printf("El área del círculo es: %.2f\n", area);
}

int main() {
    int opcion;
    float lado, base, altura, radio;

    printf("Seleccione una figura:\n");
    printf("1. Cuadrado\n");
    printf("2. Triángulo\n");
    printf("3. Círculo\n");
    printf("Ingrese el número de la figura: ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            printf("Ingrese el lado del cuadrado: ");
            scanf("%f", &lado);
            area_cuadrado(lado);
            break;
        case 2:
            printf("Ingrese la base del triángulo: ");
            scanf("%f", &base);
            printf("Ingrese la altura del triángulo: ");
            scanf("%f", &altura);
            area_triangulo(base, altura);
            break;
        case 3:
            printf("Ingrese el radio del círculo: ");
            scanf("%f", &radio);
            area_circulo(radio);
            break;
        default:
            printf("Opción inválida. Seleccione 1, 2 o 3.\n");
    }

    return 0;
}
