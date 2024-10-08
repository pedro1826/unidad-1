#include <stdio.h>

int main()
{
    float Altura, Base;
    float SUPERFICIE, PERIMETRO;

    // Mensaje de bienvenida
    printf("Hola! Este programa calcula la superficie y el perimetro de un rectangulo\n");

    // Se pide el primer n�mero
    printf("Por favor ingrese el valor de la Base: ");
    scanf("%f", &Base);

    // Se pide el segundo n�mero
    printf("Por favor ingrese el valor de la Altura: ");
    scanf("%f", &Altura);

    // Se calcula la superficie y el per�metro
    SUPERFICIE = Base * Altura;
    PERIMETRO = 2 * (Base + Altura);

    // Se muestran los resultados
    printf("\nLa Superficie del rect�ngulo es %.2f\n", SUPERFICIE);
    printf("El per�metro del rect�ngulo es %.2f\n", PERIMETRO);

    return 0;
}
