#ifndef COMBINACIONES_H_INCLUDED
#define COMBINACIONES_H_INCLUDED

/**
 * @brief Calcula el número de combinaciones posibles de un conjunto
 * 
 * @param totalElementos Número total de elementos en el conjunto (n)
 * @param tamanoSubconjunto Tamaño de cada subconjunto (r)
 * @return long double Número total de combinaciones C(n,r) = n!/(r!(n-r)!)
 * 
 * @note Esta función usa un método iterativo para evitar desbordamientos con factoriales grandes
 * @note Retorna 0 si r > n, 1 si r == 0 o r == n
 */
long double calcularCombinaciones(int totalElementos, int tamanoSubconjunto);

#endif // COMBINACIONES_H_INCLUDED
