#include <iostream>

using namespace std;

int main(){

int n;
cout<<"Sa pe do vargun?"<<endl;
cin>>n;
int avnia[n];

int a,b ;
int numruesi=0;

for(int i=0; i<n;i++){
cout<<"Shtyp nje numer te vargut: "<<endl;
cin>>avnia[i];



}

cout<<"a: "<<endl;
cin>>a;
cout<<"b: "<<endl;
cin>>b;

for(int i=0; i<n ; i++){
    if(avnia[i]>a && avnia[i]<b){
        numruesi=numruesi+1;
    }
}
cout<<numruesi<<"eshte sa numra jan mes a dhe b";

























    return 0;
}