#include <iostream>
using namespace std;

void pedir_notas(float *p1, float *p2);
float suma(float *p1, float *p2);

int main() {
    float nota=0.0,bonus=0.0;
    float *p1=&nota; float *p2=&bonus;
    pedir_notas(p1,p2);
    cout<< "Resultado:" <<suma(p1,p2);
    return 0;
}
void pedir_notas(float *p1, float *p2){
    cout<<"Ingrese nota de la PC1:";
    cin>>*p1;
    cout<<"Ingrese nota bonus:";
    cin>>*p2;
}
float suma(float *p1, float *p2){
    return *p1+*p2;
}