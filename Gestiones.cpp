#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "Gestiones.h"

void procesarCombinacion(const int* s, int r, std::ofstream& csvFile, int& conteoGenerados)
{
    std::cout << "{ ";
    for (int i = 0; i < r; ++i) {
        std::cout << s[i] << (i < r - 1 ? ", " : "");
    }
    std::cout << " }" << std::endl;

    for (int i = 0; i < r; ++i) {
        csvFile << s[i];
        if (i < r - 1) {
            csvFile << ",";
        }
    }
    csvFile << "\n";

    ++conteoGenerados;
}

void generarCombinaciones(int n, int& conteoGenerados, int r, const std::string& filename)
{
    if (n < 1 || r < 0 || r > n)
    {
        std::cerr << "Error: n debe ser ≥ 1 y 0 ≤ r ≤ n" << std::endl;
        return;
    }

    std::string nombreArchivo = filename;
    if (nombreArchivo.empty()) {
        std::ostringstream oss;
        oss << "CombinacionesLexicograficas_n" << n << "_r" << r << ".csv";
        nombreArchivo = oss.str();
    }

    std::ofstream csvFile(nombreArchivo);
    if (!csvFile.is_open())
    {
        std::cerr << "Error al crear el archivo " << nombreArchivo << std::endl;
        return;
    }

    if (r == 0)
    {
        std::cout << "{ }" << std::endl;
        csvFile << "\n";
        csvFile.close();
        return;
    }

    int* s = new int[r];

    for (int i = 0; i < r; ++i) {
        s[i] = i + 1;
    }

    procesarCombinacion(s, r, csvFile, conteoGenerados);

    while (true) {
        int m = r - 1;
        int val_max = n;

        while (m >= 0 && s[m] == val_max) {
            --m;
            --val_max;
        }

        if (m < 0) {
            break;
        }

        ++s[m];

        for (int j = m + 1; j < r; ++j) {
            s[j] = s[j - 1] + 1;
        }

        procesarCombinacion(s, r, csvFile, conteoGenerados);
    }

    delete[] s;
    csvFile.close();

    std::cout << "\nCombinaciones guardadas en " << nombreArchivo << std::endl;
}
