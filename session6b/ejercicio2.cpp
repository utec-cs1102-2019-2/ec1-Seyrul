#include<iostream>
#include<cstdlib>

int calcular_prom(int n, int notas[]);
int calcular_mayor(int n, int notas[]);
void imprimir_notas(int n, int notas[], int prom);
using namespace std;

int main(){
    int n=0;
    do{
        cout<<"Ingrese la cantidad de alumnos: ";
        cin>>n;
    } while(n<=15);
    int *notas= new int[n];
    for(int i=0;i<n;i++){
        notas[i]=rand()%21;
    }
    int p=calcular_prom(n, notas);
    cout<<"El promedio es:"<<p<<endl;
    cout<<"La mayor nota es:"<<calcular_mayor(n,notas)<<endl;
    imprimir_notas(n,notas,p);

    delete []notas;
    notas= nullptr;

return 0;}


int calcular_prom(int n, int notas[]){
    int suma=0;
    for(int i=0;i<n;i++){
        suma+=notas[i];
    }
return suma/n;}

int calcular_mayor(int n, int notas[]){
    int mayor=0;
    for (int i=0;i<n;i++){
        if (notas[i]>mayor){
            mayor=notas[i];
        }
    }
return mayor;}

void imprimir_notas(int n, int notas[], int prom){
    for (int i=0;i<n;i++){
        if (notas[i]>prom){
            cout<<notas[i]<<endl;
        }
    }
}