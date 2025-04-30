//Funcion a usar
#include <iostream>
#include <cmath>
#include "p.h"

int main(void){

    long suma = 0;
    for(int ii = 500; ii <= 1234; ++ii) {
        if (isprime(ii) == true) {
            suma += ii;    
        }
    }
    std::cout << suma << "\n";

    return 0;
}
