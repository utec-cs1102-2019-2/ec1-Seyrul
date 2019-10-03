#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>
using namespace std;
void imprimir(vector<int>v);
void eliminar(vector<int>&v);
vector<int> crear(int n);

int main(){
    srand(time(nullptr));
    int n=0;
    cout<<"Ingrese la cantidad:";
    cin>>n;
    vector<int>v=crear(n);
    imprimir(v);
    eliminar(v);
    imprimir(v);
return 0;}


void imprimir(vector<int>v){
    for (int x=0;x<v.size();x++){
        cout<<v[x]<<"\t";
}cout<<endl;}


void eliminar(vector<int>&v){
    for (int j=0;j<v.size();j++){
        if (v[j]%3==0){
            v.erase(v.begin()+j);
}}}


vector<int> crear(int n){
    vector<int>v(n,0);
    for (int i=0;i<v.size();i++){
        v[i]=rand()%31;
    }
return v;}