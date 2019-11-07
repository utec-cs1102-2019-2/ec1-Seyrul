#ifndef SESSION12B_PERRO_H
#define SESSION12B_PERRO_H
#include <iostream>
#include "mascota.h"
using namespace std;

class perro: public mascota{
public:
    perro(string nombre, string raza, int peso);

    void dormir() override;

    void comer() override;

    void sonido() override;
};


#endif //SESSION12B_PERRO_H
