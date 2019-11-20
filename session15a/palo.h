#ifndef SESSION15A_PALO_H
#define SESSION15A_PALO_H
#include"carta.h"
#include <vector>

class palo {
private:
    string nombre;
    string color;
    vector<carta>cartas;
public:
    palo(string nombre);
    virtual ~palo();
    string get_name();
    void set_color(string color);
    string get_color();
};


#endif //SESSION15A_PALO_H
