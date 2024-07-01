#include<iostream>
using namespace std;
int main(){
    int n,c,s,r;
    s=0;
    int arreglo[30];
    cout<<"ingrese el numero de celdas: ";cin>>n;
    for(int i=1;i<n;i++){
        cout<<"ingrese los valores: "<<i+1<<" ";cin>>arreglo[i];
        s=s+arreglo[i];
        if(arreglo[i]==0){
            c=c+1;
        }
    }
    r=(c/n)*100;
    cout<<"la sumatoria de elementos es: "<<s<<endl;
    cout<<"el porcentaje de ceros ingresados es: "<<r<<"%"<<endl;
    return 0;
}