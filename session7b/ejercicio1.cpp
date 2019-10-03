#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
typedef int type_t;

void crear(int filas, int columnas, int **matrix);
void imprimir(int filas, int columnas, int *matrix[]);
type_t **multiplicar(int filas,int columnas, int *matrix_A[],int *matrix_B[]);
void encontrar(int filas, int columnas, int *matrix[]);
void maximizar(int filas_1,int columnas_1,int filas_2,int columnas_2, int*matrix[]);

int main(){
    srand(time(nullptr));
    type_t filas=0,columnas=0;
    cout<<"Ingrese el numero de filas:";
    cin>>filas;
    cout<<"Ingrese el numero de columnas:";
    cin>>columnas;

    type_t **matrix_A=new type_t *[filas];
    type_t **matrix_B=new type_t *[filas];

    crear(filas,columnas,matrix_A);
    crear(filas,columnas,matrix_B);
    type_t **producto=multiplicar(filas,columnas,matrix_A,matrix_B);

    imprimir(filas,columnas,matrix_A);
    cout<<endl;
    imprimir(filas,columnas,matrix_B);
    cout<<endl;
    imprimir(filas,columnas,producto);
    encontrar(filas,columnas,producto);
    imprimir(filas,columnas,producto);

    delete matrix_A;delete matrix_B; delete producto;
    return 0;}


void crear(int filas, int columnas, int **matrix){
    for (int i=0;i<filas;i++){
        matrix[i]=new int[columnas];
        for (int x=0;x<columnas;x++){
            matrix[i][x]=rand()%10;
        }

    }
}


void imprimir(int filas, int columnas, int *matrix[]){
for (int j=0;j<columnas;j++){
    cout<<"\t"<<j;
}
cout<<endl;
for(int i=0;i<filas;i++){
    cout<<i<<"|\t";
    for(int x=0;x<columnas;x++){
        cout<<matrix[i][x]<<"\t";
    }
    cout<<endl;
}
}


type_t **multiplicar(int filas,int columnas, int *matrix_A[],int *matrix_B[]){
type_t **producto= new type_t*[filas];
for (int i=0;i<filas;i++){
    producto[i]=new int[columnas];
    for(int x=0;x<columnas;x++){
        producto[i][x]=matrix_A[i][x]*matrix_B[i][x];
    }
}
return producto;}

void encontrar(int filas, int columnas, int *matrix[]){
    for(int i=0; i<filas; i=i+3){
        for(int j=0; j<columnas; j=j+3){
            maximizar(i, j, fmin(i+3,filas),fmin(j+3,columnas), matrix);
        }
    }
}
void maximizar(int filas_1,int columnas_1,int filas_2,int columnas_2, int*matrix[]){
cout<<"Maximizada desde:"<<filas_1<<","<<columnas_1<<"hasta:"<<filas_2<<","<<columnas_2<<endl;
    type_t max = 0;
    int filas_3=0, columnas_3=0;
    for(int i=filas_1;i<filas_2; i++){
        for(int j=columnas_1;j<columnas_2;j++){
            if(matrix[i][j] > max){
                max = matrix[i][j];
                filas_3 = i;
                columnas_3 = j;
            }
        }
    }

}
