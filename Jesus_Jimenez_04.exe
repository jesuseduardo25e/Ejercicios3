#include <stdio.h>

int main() {
    float precioVenta, iva, precioBruto, descuento, totalPagar;

    // Solicitar al usuario el precio de venta
    printf("Ingrese el precio de venta del artículo: ");
    scanf("%f", &precioVenta);

    // Calcular el IVA (12%)
    iva = 0.12 * precioVenta;

    // Calcular el precio bruto (precio de venta + IVA)
    precioBruto = precioVenta + iva;

    // Verificar si se aplica descuento (si el precio bruto es mayor a 50000 bs)
    if (precioBruto > 50000) {
        descuento = 0.05 * precioBruto;
    } else {
        descuento = 0; // No se aplica descuento
    }

    // Calcular el total a pagar
    totalPagar = precioBruto - descuento;

    // Mostrar la factura
    printf("\nFactura:\n");
    printf("Precio de venta: %.2f bs\n", precioVenta);
    printf("IVA (12%%): %.2f bs\n", iva);
    printf("Precio bruto: %.2f bs\n", precioBruto);
    printf("Descuento: %.2f bs\n", descuento);
    printf("Total a pagar: %.2f bs\n", totalPagar);

    return 0;
}

