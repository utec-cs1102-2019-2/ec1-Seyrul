#include <iostream>
using namespace std;
int main(){
    cout<<"Ejercicio 2"<<endl;
    int *x=new int[10];
    x[0]=1;
    x[1]=19;
    x[9]=3;
    cout<<"index"<<"\t"<<"value"<<"\t"<<"memory address"<<endl;
    for (int i=0;i<10;i++){
        cout<<i<<"\t"<<x[i]<<"\t"<<&x[i]<<endl;
    }
    delete []x;
    return 0;}