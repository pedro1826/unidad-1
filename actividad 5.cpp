#include <stdio.h>

int main()
{
    float Altura, Base;
    float SUPERFICIE, PERIMETRO;

    // Mensaje de bienvenida
    printf("Hola! Este programa calcula la superficie y el perimetro de un rectangulo\n");

    // Se pide el primer número
    printf("Por favor ingrese el valor de la Base: ");
    scanf("%f", &Base);

    // Se pide el segundo número
    printf("Por favor ingrese el valor de la Altura: ");
    scanf("%f", &Altura);

    // Se calcula la superficie y el perímetro
    SUPERFICIE = Base * Altura;
    PERIMETRO = 2 * (Base + Altura);

    // Se muestran los resultados
    printf("\nLa Superficie del rectángulo es %.2f\n", SUPERFICIE);
    printf("El perímetro del rectángulo es %.2f\n", PERIMETRO);

    return 0;
}
