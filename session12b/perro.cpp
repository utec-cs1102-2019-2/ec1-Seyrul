#include "perro.h"

perro::perro(string nombre, string raza, int peso): mascota(nombre, raza, peso){
    cout<<"Creando un perro"<<endl;
};
void perro::dormir() {
    cout<<"Perro durmiendo\nZZZZ...";
}
void perro::comer() {
    cout<<"Perro comiendo";
}
void perro::sonido() {
    cout<<"Guau guau";
}