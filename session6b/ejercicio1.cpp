#include <iostream>
using namespace std;

void imprimir_tabla(int n,string cod[],string nombre[],int edad[], char genero[]);

int main() {
    int n=0;
    cout<<"Ingrese la cantidad de alumnos: ";
    cin>>n;
    string *cod=new string[n];
    string *nombre= new string[n];
    int *edad= new int [n];
    char *genero= new char[n];
    for (int i=0;i<n;i++){
        cout<<"Ingrese el codigo:";
        cin>>cod[i];
        cout<<"Ingrese el nombre: ";
        cin>>nombre[i];
        cout<<"Ingrese la edad: ";
        cin>>edad[i];
        cout<<"Ingrese el genero: ";
        cin>>genero[i];
    }
    imprimir_tabla(n,cod,nombre,edad,genero);
    delete cod, nombre, edad, genero;
    cod= nullptr;nombre= nullptr;edad= nullptr;genero= nullptr;
    return 0;}


void imprimir_tabla(int n,string cod[],string nombre[],int edad[], char genero[]){
    cout<<"Código"<<"\t"<<"Nombre"<<"\t"<<"Edad"<<"\t"<<"Genero";
    for (int i=0;i<n;i++){
        cout<<cod[i]<<"\t";
        cout<<nombre[i]<<"\t";
        cout<<edad[i]<<"\t";
        cout<<genero[i]<<"\t";
        cout<<"\n";
    }
}