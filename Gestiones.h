#ifndef GESTIONES_H_INCLUDED
#define GESTIONES_H_INCLUDED

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

/**
 * @brief Procesa y muestra una combinación, guardándola en un archivo CSV
 * @param s Arreglo de enteros con la combinación actual
 * @param r Tamaño de la combinación
 * @param csvFile Archivo CSV donde se guardará la combinación
 * @param conteoGenerados Contador de combinaciones generadas (se incrementa)
 * @note Muestra la combinación en consola y la escribe en el archivo
 */
void procesarCombinacion(const int* s, int r, std::ofstream& csvFile, int& conteoGenerados);

/**
 * @brief Genera todas las combinaciones lexicográficas de n elementos tomados de r en r
 * @param n Total de elementos disponibles
 * @param conteoGenerados Variable que almacenará el total de combinaciones generadas
 * @param r Tamaño de cada combinación
 * @param filename Nombre del archivo CSV de salida (si está vacío, se genera automáticamente)
 * @note Genera un archivo CSV con todas las combinaciones
 * @note Si r = 0, genera un conjunto vacío
 * @note Si n < 1 o r > n, muestra un error y termina
 */
void generarCombinaciones(int n, int& conteoGenerados, int r, const std::string& filename = "");

#endif // GESTIONES_H_INCLUDED
