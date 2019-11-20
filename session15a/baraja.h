#ifndef SESSION15A_BARAJA_H
#define SESSION15A_BARAJA_H
#include "palo.h"


class baraja {
private:
    vector<palo>palos;
public:
    baraja();
    virtual ~baraja();
    vector<carta>cartas_mostras();
};


#endif //SESSION15A_BARAJA_H
