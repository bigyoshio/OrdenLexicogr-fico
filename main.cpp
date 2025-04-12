#include <iostream>
#include <iomanip>
#include "Gestiones.h"
#include "Combinaciones.h"

int main() {
    long double numeroCombinacionesTeoricas;
    int totalElementos, tamanoSubconjunto;

    std::cout << "GENERADOR DE COMBINACIONES EN ORDEN LEXICOGRAFICO\n";

    std::cout << "Ingrese el total de elementos (n) con n >= 1: ";
    std::cin >> totalElementos;

    std::cout << "Ingrese el tamańo de la combinacion (r) con r <= n: ";
    std::cin >> tamanoSubconjunto;

    if (totalElementos < 1 || tamanoSubconjunto < 0 || tamanoSubconjunto > totalElementos) {
        std::cerr << "Error: Valores inválidos para totalElementos y tamanoSubconjunto" << std::endl;
        return 1;
    }

    std::cout << "\nEl conjunto se generara con numeros de 1 a " << totalElementos << "\n";
    std::cout << "\nGenerando combinaciones de un conjunto de tamańo " << totalElementos 
              << " en cadenas de tamańo " << tamanoSubconjunto << ":\n";

    numeroCombinacionesTeoricas = calcularCombinaciones(totalElementos, tamanoSubconjunto);
    std::cout << "\nTeoricamente el numero de combinaciones deberia ser: " 
              << numeroCombinacionesTeoricas << "\n";

    int combinacionesGeneradas = 0;
    generarCombinaciones(totalElementos, combinacionesGeneradas, tamanoSubconjunto);
    std::cout << "\nEl total de combinaciones generadas fue: " << combinacionesGeneradas << "\n";

    return 0;
}
