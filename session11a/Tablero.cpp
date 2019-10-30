#include "Tablero.h"

Tablero::Tablero(int filas, int columnas) {
    this ->filas=filas;
    this-> columnas=columnas;
    for(int i=1;i<filas;i++){
        vector<Bloque>fila;
        for (int j=1;j<columnas;j++){
            Bloque *bloque=new Bloque();
            fila.push_back(*bloque);
        }
        this-> bloques.push_back(fila);
    }
}
void Tablero::instalar_minas(int filas, int columnas){
    this->bloques[rand% filas]
}
