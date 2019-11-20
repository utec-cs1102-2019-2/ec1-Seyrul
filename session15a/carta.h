#ifndef SESSION15A_CARTA_H
#define SESSION15A_CARTA_H
#include <iostream>
using namespace std;

class carta {
private:
    int numero;
    string palo;
    string color;
public:
    carta(int n,string palo,string color);
    virtual ~carta();
};


#endif //SESSION15A_CARTA_H
