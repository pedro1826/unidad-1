#include <iostream>
using namespace std;

int main() {
    // Declaraci�n de variables
    float RADIO, ALTU, VOL, ARE;
    const float PI = 3.141592;

    // Entrada de datos
    cout << "Ingrese el radio: ";
    cin >> RADIO;
    cout << "Ingrese la altura: ";
    cin >> ALTU;

    // C�lculo del volumen y �rea
    VOL = PI * (RADIO * RADIO) * ALTU;
    ARE = 2 * PI * RADIO * ALTU;

    // Imprimir resultados
    cout << "El volumen es: " << VOL << endl;
    cout << "El �rea es: " << ARE << endl;

    return 0;
}
