#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"ingresé el la cantidad de celdas: ";cin>>n;
    int numero[n];
    int par[n];
    int impar[n];
    for(int i =0;i<n;i++){
        cout<<"ingresé el valor: ";cin>>numero[i];
        if(numero[i]%2==0){
                par[i]=numero[i];
                cout<<"el número de par es: "<< par[i] <<endl;
        }else{
                impar[i]=numero[i];
                 cout<<"el número impar es: "<< impar[i] <<endl;
        }
    }
    return 0;
}