#include "Estado_animo.h"
#include "comida.h"

#ifndef SESSION11B_MAGO_H
#define SESSION11B_MAGO_H


class Mago {
private:
    Estado_animo animo;
    comida comida;
    int p_animo;
public:
    void puntaje_animo();
    void comer();
};


#endif //SESSION11B_MAGO_H
