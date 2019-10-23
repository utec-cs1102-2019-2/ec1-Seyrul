#ifndef SESSION10A_COMPUTADORA_H
#define SESSION10A_COMPUTADORA_H
#include<iostream>
#include "mouse.h"
#include "teclado.h"
using namespace std;

class computadora {
private:
    teclado *Teclado;
    mouse *Mouse;
public:
    computadora();
    void set_lang_teclado(string lenguaje);
    string get_lang_teclado();
    ~computadora();
};


#endif //SESSION10A_COMPUTADORA_H
