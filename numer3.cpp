#include <iostream>

using namespace std;

int main () {

int n=15;
double num1 =0;
double num2;

for (int i=0;i<n;i++){
    cout<<"Enter a number :";
    cin>>num2;


     if (num2<num1){
        cout<<"Numri "<<num2<<" eshte me i vogel se numri paraprak : "<<num1<<endl;
        break;
    }
    num1=num2;
}


    return 0;
}