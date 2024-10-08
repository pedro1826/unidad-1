#include <stdio.h>

int main()
{
    // Declaración de variables
    float PRECIOPRODUCTO, DEVOLUCION;
    float PAGO;

    // Entrada de datos
    printf("Escribe el costo del articulo:\n");
    scanf("%f", &PRECIOPRODUCTO);

    printf("Escribe cuanto fue el pago del articulo:\n");
    scanf("%f", &PAGO);

    // Cálculo de devolución
    DEVOLUCION = PAGO - PRECIOPRODUCTO;

    // Se imprime el resultado
    printf("El cambio del cliente es %.2f\n", DEVOLUCION);

    return 0;
}
