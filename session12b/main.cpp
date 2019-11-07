#include <iostream>
#include "mascota.h"
#include "gato.h"
#include "perro.h"
#include <vector>
using namespace std;
int main() {
    perro *p = new perro("Firulais","Dalmata", 14);
    gato *g = new gato("Melquiades","Desconocido", 4);
    vector<mascota *> mascotas;
    mascotas.push_back(p);
    mascotas.push_back(g);

    for(int i=0; i<mascotas.size(); i++){
        mascotas[i]->mostrar();
        mascotas[i]->sonido();

    }
    return 0;
}