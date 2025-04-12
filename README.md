## 📌 Descripción del Proyecto
Este programa genera todas las combinaciones posibles de un conjunto de n elementos tomados de r en r, en orden lexicográfico, y las guarda en un archivo CSV. El proyecto incluye implementaciones de varios algoritmos de ordenamiento que pueden ser utilizados para procesar los resultados.

## Características Principales
- Generación de combinaciones en orden lexicográfico

- Cálculo del número teórico de combinaciones posibles (nCr)

- Exportación de resultados a archivos CSV con nombres automáticos

- Implementación de múltiples algoritmos de ordenamiento

- Validación de entrada de datos

## 💻 Requisitos del Sistema
- Compilador C++ compatible con C++11 o superior

- Sistema operativo Windows, Linux o macOS

- Suficiente espacio en disco para almacenar los archivos CSV generados

## 🔧 Instrucciones de Compilación
1. Clona el repositorio o descarga los archivos fuente

2. Compila todos los archivos .cpp juntos:

```bash
g++ -std=c++11 main.cpp Gestiones.cpp Combinaciones.cpp Ordenamientos.cpp -o combinaciones
```

Ejecuta el programa compilado:
```bash
./combinaciones
```

## 🚀 Uso del Programa
1. Ejecuta el programa desde la terminal/consola
2. Ingresa el valor de n (número total de elementos, n ≥ 1)
3. Ingresa el valor de r (tamaño de cada combinación, 0 ≤ r ≤ n)
4. El programa mostrará las combinaciones generadas en la consola

Los resultados se guardarán automáticamente en un archivo CSV con el formato: CombinacionesLexicograficas_nX_rY.csv

## 📂 Estructura de Archivos
```
/
├── Combinaciones.h         # Declaración de funciones matemáticas
├── Combinaciones.cpp       # Implementación de cálculo de combinaciones
├── Gestiones.h             # Interfaz para generación de combinaciones
├── Gestiones.cpp           # Implementación de generación de combinaciones
├── Ordenamientos.h         # Interfaz de algoritmos de ordenamiento
├── Ordenamientos.cpp       # Implementación de algoritmos de ordenamiento
├── main.cpp                # Programa principal
└── README.md               # Este archivo de documentación
```
## 📜 Licencia
Este proyecto está bajo la licencia MIT.
