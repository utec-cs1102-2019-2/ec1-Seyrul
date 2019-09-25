#include <iostream>
using namespace std;


void imprimir_notas(int notas[], int n, int p);
int calcular_promedio(int notas[], int n);
int calcular_nota_mayor(int notas[], int n);
int calcular_nota_menor(int notas[], int n);
void eliminar_notas(int notas[], int n,int nota);


int main(){
    int n=0;
    cout<<"Ingrese la cantidad de alumnos:";
    cin>>n;
    int *notas=new int[n];
    for (int z=0;z<n;z++){
        cin>>notas[z];
    }
    imprimir_notas(notas,n,0);
    int p=calcular_promedio(notas,n);
    cout<<"El promedio es:"<<p<<endl;
    imprimir_notas(notas,n,p);

    cout<<"La nota mayor es:"<< calcular_nota_mayor(notas,n)<<endl;

    int menor_nota=calcular_nota_menor(notas,n);
    cout<<"La nota menot es:"<< menor_nota<<endl;

    eliminar_notas(notas,n,menor_nota);
    return 0;}


void imprimir_notas(int notas[], int n, int p){
    cout<<"Indice | \t valor"<<endl;
    cout<<"-------|---------------"<<endl;
    for (int i=0;i<n;i++){
        if (notas[i]>p)
        cout<<i<<"\t"<<notas[i]<<endl;
    }
}
int calcular_promedio(int notas[], int n){
    int suma=0;
    int cant=0;
    for (int i=0;i<n;i++){
        if(notas[i]>=0){
        suma+=notas[i];
        cant+=1;}
    }
    return suma/cant;
}
int calcular_nota_mayor(int notas[], int n) {
   int mayor=0;
    for (int i = 0; i < n; i++) {
        if (notas[i] > mayor)
            mayor=notas[i];
    }return mayor;
}
int calcular_nota_menor(int notas[], int n){
    int menor=9999999;
    for (int i = 0; i < n; i++){
        if (notas[1<menor])
            menor=notas[i];}
    return menor;

}
void eliminar_notas(int notas[], int n, int menor_nota){
    for (int i=0;i<n;i++){
        if(notas[i]==menor_nota){
            notas[i]= -1;
        }
    }
}