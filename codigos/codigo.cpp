#include <iostream>    // Para imprimir en pantalla con cout
#include <cmath>       // Para usar funciones matemáticas como pow() y fabs()
#include <iomanip>     // Para controlar el formato de salida, como precision y scientific

using namespace std;

// Función que calcula una aproximación de pi usando la fórmula BBP
double pi_aprox(int n) {
    double suma = 0.0;  // Variable acumuladora para sumar los términos de la serie

    for (int k = 0; k <= n; ++k) {  // Bucle que suma los primeros (n+1) términos
        double term = 1.0 / pow(16.0, k) * (
            4.0 / (8 * k + 1) -
            2.0 / (8 * k + 4) -
            1.0 / (8 * k + 5) -
            1.0 / (8 * k + 6)
        );
        suma += term;
    }

    return suma;  // Devolvemos la suma como el valor aproximado de pi
}

int main() {
    cout << scientific;         // Notación científica
    cout << setprecision(16);   // 16 cifras significativas

    // Vamos a probar valores de n del 1 al 20
    for (int n = 1; n <= 20; ++n) {
        double approx = pi_aprox(n);              // Calculamos la aproximación
        double rel_error = fabs(1.0 - approx / M_PI);  // Error relativo respecto a pi

        // Imprimimos los resultados en notación científica
        cout << "n = " << n
             << " | pi_aprox(n) = " << approx
             << " | Error relativo = " << rel_error
             << endl;
    }

    return 0;  // El programa terminó bien
}
