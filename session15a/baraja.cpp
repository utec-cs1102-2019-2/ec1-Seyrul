#include "baraja.h"
baraja::baraja() {
    palo espadas("espadas");
    palo trebol("trebol");
    palo corazones("corazones");
    palo diamantes("diamantes");
    palos={espadas,trebol,corazones,diamantes};
espadas.set_color("black");
trebol.set_color("black");
corazones.set_color("red");
diamantes.set_color("red");
}
baraja::~baraja() {}