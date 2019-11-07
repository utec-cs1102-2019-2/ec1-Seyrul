#ifndef SESSION12B_GATO_H
#define SESSION12B_GATO_H

#include "mascota.h"


class gato: public mascota {
public:
    gato(string nombre, string raza, int peso);
    void dormir() override;

    void comer() override;

    void sonido() override;
};


#endif //SESSION12B_GATO_H
