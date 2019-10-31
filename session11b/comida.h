#include <iostream>
using namespace std;
#ifndef SESSION11B_COMIDA_H
#define SESSION11B_COMIDA_H


class comida {
private:
    int puntos=0;
    string nombre;
public:
    void set_nombre(string nom);
    int get_puntos();
    string get_name();

};


#endif //SESSION11B_COMIDA_H
