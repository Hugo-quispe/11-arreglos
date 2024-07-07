#include<iostream>
using namespace std;
void generar(int );
int main(){
    int a;
    cout<<"ingrese la cantidad de elementos que tendra el arreglo: ";cin>>a;
    generar(a);
    return 0;
}
void generar(int a){
    int r=0;
    int num[a];
    cout<<"ingrese el primer digito a almacenar: ";cin>>num[0];
    for(int i=1;i<a;i++){
        r=r+num[0];
        r=num[i];
        cout<<"los numeros generados son: "<<num[i]<<endl;
    }
} 