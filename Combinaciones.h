#ifndef GESTIONES_H_INCLUDED
#define GESTIONES_H_INCLUDED

#include <iostream>
#include <fstream>
#include <string>

void procesarCombinacion(const int* combinacionActual, int tamanoSubconjunto, 
                         std::ofstream& archivoSalida, int& contadorCombinaciones);
void generarCombinaciones(int totalElementos, int& contadorCombinaciones, 
                         int tamanoSubconjunto, const std::string& nombreArchivo = "");

#endif // GESTIONES_H_INCLUDED
