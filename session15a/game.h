#ifndef SESSION15A_GAME_H
#define SESSION15A_GAME_H
#include "baraja.h"
#include "carta.h"


class game {
private:
    baraja *b=new baraja();
    vector<carta>cartas_pantalla;
public:
    game();
    virtual ~game();
    void start();
};


#endif //SESSION15A_GAME_H
