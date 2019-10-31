#include <iostream>
#include"comida.h"
using namespace std;
#ifndef SESSION11B_ESTADO_ANIMO_H
#define SESSION11B_ESTADO_ANIMO_H


class Estado_animo {
private:
    string nombre;
   int puntaje;
public:
    void calcular(comida alimento);
};


#endif //SESSION11B_ESTADO_ANIMO_H
