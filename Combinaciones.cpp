#include <cmath>
#include <iostream>
#include "Combinaciones.h"



long double calcularCombinaciones(int n, int r) {
    if (r > n) return 0;
    if (r == 0 || r == n) return 1;

    long double resultado = 1;
    for (int i = 1; i <= r; ++i) {
        resultado = resultado * (n - r + i) / i;
    }
    return resultado;
}

