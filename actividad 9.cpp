#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    float RADIO, ALTU, VOL, ARE;
    const float PI = 3.141592;

    // Entrada de datos
    cout << "Ingrese el radio: ";
    cin >> RADIO;
    cout << "Ingrese la altura: ";
    cin >> ALTU;

    // Cálculo del volumen y área
    VOL = PI * (RADIO * RADIO) * ALTU;
    ARE = 2 * PI * RADIO * ALTU;

    // Imprimir resultados
    cout << "El volumen es: " << VOL << endl;
    cout << "El área es: " << ARE << endl;

    return 0;
}
