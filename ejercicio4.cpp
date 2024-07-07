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
    int num[a],r;
    cout<<"ingrese el primer digito a almacenar: ";cin>>num[0];
    for(int j=1;j<a;j++){
        r=num[0]*(j+1);
        num[j]=r;
    }
    for(int i=0;i<a;i++){
        cout<<"los numeros generados son: "<<num[i]<<endl;
    }
} 