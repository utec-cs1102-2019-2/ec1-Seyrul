#include "palo.h"
palo::palo(string nombre){
this ->nombre=nombre;
for (int i=1;i<14;i++){
    carta car(i,nombre,color);
    cartas.push_back(car);
}
}
void palo::set_color(string color){this->color=color;}
string palo::get_name() {return nombre;}
string palo::get_color(){ return color;}
palo::~palo() {}