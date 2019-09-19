#include <iostream>
using namespace std;
int main(){
    double *ptr=nullptr;
    double *ptr2= nullptr;
    ptr=new double;
    ptr2= new double;
    cout<<"Ingrese primer numero:";
    cin>>*ptr;
    cout<<"Ingrese segundo numero:";
    cin>>*ptr2;
    cout<<"La suma es:"<<*ptr+*ptr2<<"\n";
    cout<<"La diferencia es:"<<*ptr-*ptr2<<"\n";
    cout<<"El producto es:"<<*ptr * *ptr2<<"\n";
    delete ptr; ptr= nullptr;
    delete ptr2; ptr2=nullptr;
    return 0;
}