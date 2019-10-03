#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n=0;
    cout<<"Ingrese la cantidad de numeros:";
    cin>>n;
    vector<int>v(n,0);
    for (int i=0;i<v.size();i++){
        cout<<"Ingrese un numero:";
        cin>>v[i];
    }
    for (int x=n-1;x>=0;x=x-1){
        cout<<v[x]<<"\t";
    }
return 0;}