#ifndef SESSION11A_TABLERO_H
#define SESSION11A_TABLERO_H

#include "Bloque.h"
#include <ctime>
#include <cstdlib>
#include <vector>
#include <iostream>
using namespace std;

class Tablero {
private:
    int filas;
    int columnas;
    vector<vector<Bloque>>bloques;
public:
    Tablero(int filas, int columnas);
    void instalar_minas(int filas, int columnas);
    void mostrar();
};


#endif //SESSION11A_TABLERO_H
