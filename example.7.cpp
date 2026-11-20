#include <iostream>
using namespace std;


int main (){

double numri;
double numri_paraprak;
cout<<"shtype nje numer : "<<endl;
cin>>numri_paraprak;

for(int i =1; i<12 ; i++){
    cout<<"Shtype nje numer : "<<endl;
    cin>>numri ;

    if(numri<numri_paraprak){
        cout<<"Numri "<<numri<<" eshte me i vogel se numri paraprak :"<<numri_paraprak;
        break;
    }

    numri_paraprak=numri;


}


    

    






    return 0;
}