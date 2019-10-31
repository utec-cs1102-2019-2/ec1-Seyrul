#include "comida.h"

void comida::set_nombre(string nom) {
    nombre=nom;
    if (nombre=="Abarrote") puntos=2;
    else if(nombre=="Lembas")puntos=3;
    else if(nombre=="Manzana")puntos=1;
    else if (nombre=="Melon") puntos =1;
    else if(nombre=="HoneyCake") puntos=5;
    else if (nombre=="Hongos") puntos=-10;
    else puntos=-1;
}
int comida::get_puntos() {
    return puntos;
}
string comida::get_name() {
    return nombre;
}