#include <iostream>    
#include <cmath>       
#include <iomanip>     

using namespace std;

// Función 
double pi_aprox(int n) {
    double suma = 0.0; 

    for (int k = 0; k <= n; ++k) {  // Bucle que suma los primeros (n+1) 
        double term = 1.0 / pow(16.0, k) * (
            4.0 / (8 * k + 1) -
            2.0 / (8 * k + 4) -
            1.0 / (8 * k + 5) -
            1.0 / (8 * k + 6)
        );
        suma += term;
    }

    return suma;  //suma como el valor de pi
}

int main() {
    cout << scientific;         // Notación científica
    cout << setprecision(16);   // cifras significativas

    // Valores de 1 al 20
    for (int n = 1; n <= 20; ++n) {
        double approx = pi_aprox(n);              //aproximacion
        double rel_error = fabs(1.0 - approx / M_PI);  //error relativo

        cout << "n = " << n
             << " | pi_aprox(n) = " << approx  
             << " | Error relativo = " << rel_error  
             << endl;
    }

    return 0;  
}
