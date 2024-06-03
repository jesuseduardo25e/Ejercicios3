#include <stdio.h>

int main() {
    float distancia, precioKilometro, precioIda, precioVuelta, precioTotal;
    int diasEstancia;

    // Solicitar al usuario la distancia a recorrer y el número de días de estancia
    printf("Ingrese la distancia a recorrer (en kilómetros): ");
    scanf("%f", &distancia);
    printf("Ingrese el número de días de estancia: ");
    scanf("%d", &diasEstancia);

    // Calcular el precio por kilómetro
    precioKilometro = 2.5;

    // Calcular el precio de ida y vuelta sin descuento
    precioIda = distancia * precioKilometro;
    precioVuelta = distancia * precioKilometro;

    // Aplicar descuento si corresponde
    if (diasEstancia > 7 && distancia > 800) {
        float descuento = 0.7; // 70% de descuento
        precioIda *= descuento;
        precioVuelta *= descuento;
    }

    // Calcular el precio total
    precioTotal = precioIda + precioVuelta;

    // Mostrar el resultado
    printf("\nPrecio de ida: %.2f bs\n", precioIda);
    printf("Precio de vuelta: %.2f bs\n", precioVuelta);
    printf("Precio total (ida y vuelta): %.2f bs\n", precioTotal);

    return 0;
}
