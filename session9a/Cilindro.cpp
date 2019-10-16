#include "Cilindro.h"
#include <math.h>
#define M_PI   3.14159265358979323846

Cilindro::Cilindro(float radio, float altura) {
    this->altura=altura;
    this->radio=radio;
}
float Cilindro::volumen() {
    return M_PI*pow(radio,2)*altura;
}
float Cilindro::areaT() {
return 2*M_PI*pow(radio,2)+areaL();
}
float Cilindro::areaL() {
    return 2*M_PI*radio*altura;
}
