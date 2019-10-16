#ifndef SESSION9A_EJERCICIO2_H
#define SESSION9A_EJERCICIO2_H


class Cilindro {
private:
    float radio;
    float altura;
public:
    Cilindro(float radio, float altura);
    float volumen();
    float areaT();
    float areaL();
    ~Cilindro();
};


#endif //SESSION9A_EJERCICIO2_H
