#include <cmath>
#include <iostream>
#include "Combinaciones.h"

long double calcularCombinaciones(int totalElementos, int tamanoSubconjunto) {
    if (tamanoSubconjunto > totalElementos) return 0;
    if (tamanoSubconjunto == 0 || tamanoSubconjunto == totalElementos) return 1;

    long double resultado = 1;
    for (int iterador = 1; iterador <= tamanoSubconjunto; ++iterador) {
        resultado = resultado * (totalElementos - tamanoSubconjunto + iterador) / iterador;
    }
    return resultado;
}
