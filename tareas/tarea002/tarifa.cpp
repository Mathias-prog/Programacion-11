#include <iostream>
using namespace std;

float calcular_tarifa(int edad, char tipo_boleto) {
    const float precio_base = 100.0;
    if (edad < 5) return 0;
    if (tipo_boleto == 'E') return precio_base * 0.5;
    if (tipo_boleto == 'S' && edad >= 60) return precio_base * 0.7;
    return precio_base;
}

int main() {
    int edad;
    char tipo_boleto;

    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad < 0) {
        cout << "Error: La edad no puede ser negativa." << endl;
        return 1;
    }

    cout << "Elija el tipo de boleto:" << endl;
    cout << "(N) Normal" << endl;
    cout << "(E) Estudiante" << endl;
    cout << "(S) Senior" << endl;

    do {
        cout << "Ingrese la letra correspondiente: ";
        cin >> tipo_boleto;
        tipo_boleto = toupper(tipo_boleto);
        if (tipo_boleto != 'N' && tipo_boleto != 'E' && tipo_boleto != 'S') {
            cout << "Tipo de boleto no válido. Por favor, intente de nuevo." << endl;
        }
    } while (tipo_boleto != 'N' && tipo_boleto != 'E' && tipo_boleto != 'S');

    float precio_final = calcular_tarifa(edad, tipo_boleto);
    cout << "El precio final de su boleto es: $" << precio_final << endl;

    return 0;
}
