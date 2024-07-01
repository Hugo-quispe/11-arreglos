#include<iostream>
using namespace std;
int main(){
    int num[30],n,max;
    cout<<"ingrese la cantidad de los elementos a leer: ";
    cin>>n;
    cout<<"ingrese los elementos: ";
    for(int i=0; i<n; i++){
        cout<<"ingrese el elemento #"<<i+1<<": ";
        cin>>num[i];
    }
    max=num[0];
    for(int i=1; i<n; i++){
        if(num[i]>max){
            max= num[i];
        }
    }
    cout<<"el mayor elemento ingresado es: "<<max<<endl;
    return 0;
}