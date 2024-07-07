#include<iostream>
using namespace std;
int main (){
    int a,b;
    cout<<"ingrese la cantidad de estudiantes de fundamentos de programacion: ";cin>>a;
    string fp[a];
    for(int i=0;i<a;i++){
        cout<<"ingrese el nombre del estudiante: ";cin>>fp[i];
    }
    cout<<"ingrese la cantidad de estudiantes de programacion grafica: ";cin>>b;
    string pg[b];
    for(int i=0;i<b;i++){
        cout<<"ingrese el nombre del estudiante: ";cin>>pg[i];
    }
    int p=0;
    string comun[999];
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            if(fp[i]==pg[j]){
                comun[p]=fp[i];
                    p++;
            }
        }
    }
    cout<<"el total de estudiantes en comun son: "<<p<<endl;
    for (int b=0;b<p;b++){
    cout<<"el estudiante en comun es: "<<comun[b]<<endl;
    }

    return 0;
}