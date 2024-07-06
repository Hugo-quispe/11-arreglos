#include<iostream>
using namespace std;
int main (){
    int a,b;
    cout<<"ingrese la cantidad de estudiantes de fundamentos de programacion: ";cin>>a;
    cout<<"ingrese la cantidad de estudiantes de programacion grafica: ";cin>>b;
    char fp[a];
    for(int i=0;i<a;i++){
        cout<<"ingrese el nombre del estudiante: ";cin>>fp[i];
    }
    char pg[b];
    for(int j=0;j<b;j++){
        cout<<"ingrese el nombre del estudiante: ";cin>>pg[j];
    }
}