#include <iostream>
#include <iomanip>
#include "Gestiones.h"
#include "Combinaciones.h"

int main()
{
    long double combinacionesTeoricas;
    int n, r;

    std::cout << "GENERADOR DE COMBINACIONES EN ORDEN LEXICOGRAFICO\n";

    std::cout << "Ingrese el total de elementos (n) con n >= 1: ";
    std::cin >> n;

    std::cout << "Ingrese el tamaño de la combinacion (r) con r <= n: ";
    std::cin >> r;

    if (n < 1 || r < 0 || r > n) {
        std::cerr << "Error: Valores inválidos para n y r" << std::endl;
        return 1;
    }

    std::cout << "\nEl conjunto se generara con numeros de 1 a " << n << "\n";
    std::cout << "\nGenerando combinaciones de un conjunto de tamaño " << n << " en cadenas de tamaño " << r << ":\n";

    combinacionesTeoricas = calcularCombinaciones(n, r);
    std::cout << "\nTeoricamente el numero de combinaciones deberia ser: " << combinacionesTeoricas << "\n";

    int combinacionesGeneradas = 0;
    generarCombinaciones(n, combinacionesGeneradas, r);
    std::cout << "\nEl total de combinaciones generadas fue: " << combinacionesGeneradas << "\n";

    return 0;
}
