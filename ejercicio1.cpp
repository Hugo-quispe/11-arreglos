#include<iostream>
using namespace std;
int main(){
    int s=0,n;
    float r,p=0;
        cout<<"ingresé la cantidad de números: ";cin>>n;
        int numeros[n];
        for(int i=0;i<n;i++){
            cout<<"ingresé el: ";cin>>numeros[i];
            if(numeros[i]==0){
                p++;
            }
            s=s+numeros[i];
        }
        cout<<"la suma es: "<<s<<endl;
        r=(p++/n)*100;
        cout<<"el porcentaje de ceros ingresados es: "<<r<<"%"<<endl;
    return 0;
}