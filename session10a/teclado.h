#ifndef SESSION10A_TECLADO_H
#define SESSION10A_TECLADO_H
#include<iostream>
using namespace std;


class teclado {
private:
    string language;
    string marca;
public:
void set_language(string lenguaje);
void set_marca();

string get_language();

~teclado();
};


#endif //SESSION10A_TECLADO_H
