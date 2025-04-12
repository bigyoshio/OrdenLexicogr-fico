#ifndef GESTIONES_H_INCLUDED
#define GESTIONES_H_INCLUDED

#include <iostream>
#include <fstream>
#include <string>

void procesarCombinacion(const int* s, int r, std::ofstream& csvFile, int& conteoGenerados);
void generarCombinaciones(int n, int& conteoGenerados, int r, const std::string& filename = "");

#endif // GESTIONES_H_INCLUDED
