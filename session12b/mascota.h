#ifndef SESSION12B_MASCOTA_H
#define SESSION12B_MASCOTA_H
#include <iostream>
using namespace std;

class mascota {
private:
    string nombre;
    string raza;
    int peso;
public:
    virtual ~mascota();
    mascota(string x_nombre, string x_raza, int x_peso);
    void mostrar();
    virtual void dormir();
    virtual void comer();
    virtual void sonido();
};


#endif //SESSION12B_MASCOTA_H
