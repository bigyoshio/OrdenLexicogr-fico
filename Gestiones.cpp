#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "Gestiones.h"

void procesarCombinacion(const int* combinacionActual, int tamanoSubconjunto, 
                        std::ofstream& archivoSalida, int& contadorCombinaciones) {
    std::cout << "{ ";
    for (int indice = 0; indice < tamanoSubconjunto; ++indice) {
        std::cout << combinacionActual[indice] << (indice < tamanoSubconjunto - 1 ? ", " : "");
    }
    std::cout << " }" << std::endl;

    for (int indice = 0; indice < tamanoSubconjunto; ++indice) {
        archivoSalida << combinacionActual[indice];
        if (indice < tamanoSubconjunto - 1) {
            archivoSalida << ",";
        }
    }
    archivoSalida << "\n";

    ++contadorCombinaciones;
}

void generarCombinaciones(int totalElementos, int& contadorCombinaciones, 
                         int tamanoSubconjunto, const std::string& nombreArchivo) {
    if (totalElementos < 1 || tamanoSubconjunto < 0 || tamanoSubconjunto > totalElementos) {
        std::cerr << "Error: totalElementos debe ser ≥ 1 y 0 ≤ tamanoSubconjunto ≤ totalElementos" << std::endl;
        return;
    }

    std::string nombreArchivoSalida = nombreArchivo;
    if (nombreArchivoSalida.empty()) {
        std::ostringstream flujoSalida;
        flujoSalida << "CombinacionesLexicograficas_n" << totalElementos << "_r" << tamanoSubconjunto << ".csv";
        nombreArchivoSalida = flujoSalida.str();
    }

    std::ofstream archivoSalida(nombreArchivoSalida);
    if (!archivoSalida.is_open()) {
        std::cerr << "Error al crear el archivo " << nombreArchivoSalida << std::endl;
        return;
    }

    if (tamanoSubconjunto == 0) {
        std::cout << "{ }" << std::endl;
        archivoSalida << "\n";
        archivoSalida.close();
        return;
    }

    int* combinacionActual = new int[tamanoSubconjunto];

    for (int indice = 0; indice < tamanoSubconjunto; ++indice) {
        combinacionActual[indice] = indice + 1;
    }

    procesarCombinacion(combinacionActual, tamanoSubconjunto, archivoSalida, contadorCombinaciones);

    while (true) {
        int posicionActual = tamanoSubconjunto - 1;
        int valorMaximo = totalElementos;

        while (posicionActual >= 0 && combinacionActual[posicionActual] == valorMaximo) {
            --posicionActual;
            --valorMaximo;
        }

        if (posicionActual < 0) {
            break;
        }

        ++combinacionActual[posicionActual];

        for (int indiceSiguiente = posicionActual + 1; indiceSiguiente < tamanoSubconjunto; ++indiceSiguiente) {
            combinacionActual[indiceSiguiente] = combinacionActual[indiceSiguiente - 1] + 1;
        }

        procesarCombinacion(combinacionActual, tamanoSubconjunto, archivoSalida, contadorCombinaciones);
    }

    delete[] combinacionActual;
    archivoSalida.close();

    std::cout << "\nCombinaciones guardadas en " << nombreArchivoSalida << std::endl;
}
