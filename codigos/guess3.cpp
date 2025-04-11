/*
Juego de adivinar un numero

Tener un numero aleatorio
Preguntar al usuario el numero
Informar si lo adivino o no
*/

#include <iostream>
#include <random> // Para generar números aleatorios

// Declaración
void play(int min_val, int max_val);

int main() {
    play(1, 100);
    play(2, 22);

    return 0;
}

// Implementación
void play(int min_val, int max_val) {
    // Generar número secreto aleatorio dentro del rango
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(min_val, max_val);
    const int NUM = distr(gen);

    const int MIN = min_val;
    const int MAX = max_val;

    int guessed_number = -1;

   
    std::cout << "¡Bienvenido al juego de adivinar el número!\n";
    std::cout << "Adivina un número entre " << MIN << " y " << MAX << ".\n";

    while (guessed_number != NUM) {
        std::cout << "Tu intento: ";
        std::cin >> guessed_number;
        std::cout << "Escribiste: " << guessed_number << "\n";

        // Validación del rango
        if (guessed_number < MIN || guessed_number > MAX) {
            std::cout << "El número no está en el rango. Intenta otra vez.\n";
            continue;
        }

        if (guessed_number == NUM) {
            std::cout << " ¡GANASTE! El número era " << NUM << ".\n";
        } else if (guessed_number > NUM) {
            std::cout << " Te pasaste.\n";
        } else {
            std::cout << " Te falta.\n";
        }
    }

 
}
