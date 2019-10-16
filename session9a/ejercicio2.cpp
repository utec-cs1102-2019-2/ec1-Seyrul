#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Cilindro.h"
using namespace std;
int main() {
    srand(time(nullptr));
    int n=0;
    cout<<"Ingrese la cantidad de cilindros:";
    cin>>n;
    for (int i=0;i<n;i++){
        Cilindro *c = new Cilindro(rand()%100,rand()%100);
        cout<<"Cilindro "<<i+1<<endl<<"El volumen es: "<<c->volumen()<<endl;
        cout<<"El area lateral es: "<<c->areaL()<<endl;
        cout<<"El area total es: "<<c->areaT()<<endl;
        cout<<endl;
    }
    return 0;
}