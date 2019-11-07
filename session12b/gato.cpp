#include "gato.h"
gato::gato(string nombre, string raza, int peso):mascota(nombre,raza,peso) {
    cout<<"Se está creando un gato";
}
void gato::dormir() {
    cout<<"Gato durmiendo\nZZZZ...";
}
void gato::comer() {
    cout<<"Gato comiendo";
}
void gato::sonido() {
    cout<<"Miau";
}
