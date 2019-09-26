#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void imprimir_matriz(int filas,int columnas, int **matriz);

int main(){
    srand(time(nullptr));
    int filas=0,columnas=0;
    cout<<"Ingrese la cantidad de filas:";
    cin>>filas;
    cout<<"Ingrese cantidad de columnas:";
    cin>>columnas;
    cout<<"\n";
    int **pmatriz=nullptr;
    pmatriz=new int*[filas];
    for (int i=0;i<filas;i++){
        pmatriz[i]= new int[columnas];
        for (int j=0;j<columnas;j++){
            pmatriz[i][j]=rand()%100;
        }
    }
    imprimir_matriz(filas,columnas,pmatriz);
    delete []pmatriz;
    pmatriz= nullptr;


return 0;}

void imprimir_matriz(int filas,int columnas, int **matriz){
    for (int i=0;i<filas;i++){
        for (int j=0;j<columnas;j++){
            cout<<matriz[i][j]<<"\t";
        }
        cout<<"\n";
    }
}