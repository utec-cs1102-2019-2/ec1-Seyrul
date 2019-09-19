#include <iostream>
using namespace std;

int varGlobal=20;
int main(int argc, char *argv[]){
    cout<<"Ejercicio 1"<<endl;
    int varLocal=10;
    int *ptrVarLocal=&varLocal;
    *ptrVarLocal=20;
    cout<<varLocal<<"\n";
return 0;}
