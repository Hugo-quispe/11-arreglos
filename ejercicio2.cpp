#include<iostream>
using namespace std;
int main (){
    int n,v,h;
    int par[50];
    int impar[50];
    cout<<"ingresé el la cantidad de celdas: ";cin>>n;
    int numero[n];
    for(int i =0;i<n;i++){
        cout<<"ingresé el valor: ";cin>>numero[i];
        if(numero[i]%2==0){
            h++;
            número[i]=par[h];
        }else 
            v++;
            numero[i]=impar[v];
    }
    for(int j =0;j<h;j++){
        cout<<"el número de par es: "<<par[h]<<endl;
    }
    for(int b=0;b<v;b++){
        cout<<"el número impar es: "<<impar[b]<<endl;
    }
    
}