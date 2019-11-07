#include "mascota.h"
mascota::mascota(string x_nombre, string x_raza, int x_peso): nombre(x_nombre), raza(x_raza), peso(x_peso){
    cout<<"Creando nueva mascota"<<endl;
}
mascota::~mascota() {}
void mascota::mostrar(){
    cout<<"Nombre:\t"<<nombre<<endl;
    cout<<"Peso:\t"<<peso<<endl;
    cout<<"Raza:\t"<<raza<<endl;
}
void mascota::dormir(){}
void mascota::comer(){}
void mascota::sonido(){}
;