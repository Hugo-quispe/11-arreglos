#include<iostream>
using namespace std;
int main(){
    int m=100,r,s,t,h;
    int temperatura[7];
    int temmin[7];
    int temmax[7];
    int n;
    for(int i=0;i<7;i++){
        cout<<"registro de temperatura minima y temperatura maxima. Dia:"<<i+1<<endl;
        for(int j=0;j<1;j++){
            cout<<"ingrese la temperatura min: ";cin>>temmin[j];
            if(temmin[j]<m){
                m=temmin[j];
            }
            s=temmin[j];            
        }
        for(int b=0;b<1;b++){
            cout<<"ingrese la temperatura mayor: ";cin>>temmax[b];
            t=temmax[b];
                    if(temmax[b]==temmax[b]){
                        h++;
                        
                    }
        }
        r=(s+t)/2;
        cout<<"la temperatura media fue: "<<r<<endl;
    }
    cout<<"la temperatura menor en toda la semana fue: "<<m<<endl;

    return 0;
}