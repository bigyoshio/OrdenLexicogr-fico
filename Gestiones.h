#ifndef GESTIONES_H_INCLUDED
#define GESTIONES_H_INCLUDED

#include <iostream>
#include <fstream>
#include <string>

/**
 * @brief Procesa y muestra una combinación generada
 * 
 * @param combinacionActual Arreglo con la combinación actual
 * @param tamanoSubconjunto Tamaño de la combinación (r)
 * @param archivoSalida Archivo CSV donde se guardarán las combinaciones
 * @param contadorCombinaciones Referencia al contador total de combinaciones generadas
 * 
 * @note Muestra la combinación en consola y la escribe en el archivo CSV
 * @note Incrementa el contador de combinaciones generadas
 */
void procesarCombinacion(const int* combinacionActual, int tamanoSubconjunto, 
                        std::ofstream& archivoSalida, int& contadorCombinaciones);

/**
 * @brief Genera todas las combinaciones posibles en orden lexicográfico
 * 
 * @param totalElementos Número total de elementos (n)
 * @param contadorCombinaciones Referencia al contador total de combinaciones generadas
 * @param tamanoSubconjunto Tamaño de cada combinación (r)
 * @param nombreArchivo Nombre opcional del archivo de salida (si está vacío, se genera automáticamente)
 * 
 * @note Genera combinaciones en orden lexicográfico usando un algoritmo iterativo
 * @note Crea un archivo CSV con todas las combinaciones generadas
 * @note Valida que 1 ≤ n y 0 ≤ r ≤ n
 * @note Si r == 0, genera solo el conjunto vacío
 */
void generarCombinaciones(int totalElementos, int& contadorCombinaciones, 
                         int tamanoSubconjunto, const std::string& nombreArchivo = "");

#endif // GESTIONES_H_INCLUDED
