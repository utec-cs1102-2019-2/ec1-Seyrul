#include "computadora.h"

computadora::computadora(){
    teclado *Teclado=new teclado();
    mouse *Mouse=new mouse();
}
void computadora::set_lang_teclado(string lenguaje) {

    Teclado->set_language(lenguaje);
}
string computadora::get_lang_teclado() {
    return Teclado->get_language();
}

computadora::~computadora() {
    delete Teclado;
    Teclado= nullptr;
    delete Mouse;
    Mouse= nullptr;
}