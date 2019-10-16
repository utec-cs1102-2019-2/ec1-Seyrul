#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
class CTriangulo{
private:
    float lado1,lado2,lado3;
public:
    float area(){
        float s=semiperimetro();
        return (sqrt(s*(s-lado1)*(s-lado2)*(s-lado3)));
    }
    float perimetro(){
        return lado1+lado2+lado3;
    }
    float semiperimetro(){
        return (lado1+lado2+lado3)/2;};
    void set_lados(float _lado1,float _lado2,float _lado3){
        lado1=_lado1;lado2=_lado2;lado3=_lado3;
    }

};


int main(){
    srand(time(nullptr));
    for (int i=0;i<1000;i++){
        float lado1=rand()%10,lado2=rand()%10,lado3=rand()%10;
        CTriangulo x;
        x.set_lados(lado1,lado2,lado3);
        cout<<"Lado1:"<<lado1<<"\t"<<"Lado2:"<<lado2<<"\t"<<"Lado3:"<<lado3<<endl;
        cout<<"El area es:"<<x.area()<<"\n"<<"El perimetro es:"<<x.perimetro()<<"\n"<<endl;
    }
    return 0;}