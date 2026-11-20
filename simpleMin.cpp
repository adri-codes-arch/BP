#include <iostream> 

using namespace std;

int main (){        
    int num1 , num2 , num3;

    cout<<"Shtypni tre numra: ";
    cin>>num1>>num2>>num3;

    int min=num1;
    if (num2<num1 && num2<num3){
        min=num2;
    }   
        else if (num3<num1 && num3<num2){
            min=num3;

        }
        else 
        min=num1;
        cout<<"Vlera me e vogel eshte "<<min;
    



    












    return 0;
}