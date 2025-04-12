#ifndef COMBINACIONES_H_INCLUDED
#define COMBINACIONES_H_INCLUDED

/**
 * @brief Calcula el número de combinaciones posibles (nCr)
 * @param n Número total de elementos
 * @param r Tamaño de cada combinación
 * @return Número de combinaciones como long double
 * @note Retorna 0 si r > n
 * @note Retorna 1 si r == 0 o r == n
 * @note Usa un método iterativo para evitar overflow numérico
 */
long double calcularCombinaciones(int n, int r);

#endif // COMBINACIONES_H_INCLUDED
