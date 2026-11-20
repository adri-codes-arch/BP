#include <iostream>

using namespace std;

int main (){
    int n;
    cout<<"Sa elemente permban vektori"<<endl;
    cin>>n;

    int numrat[n];

    for(int i=0 ; i<n ; i++){
        cout<<"Shtyp nje numer te vektorit: ";
        cin>>numrat[i];


    }

    int min=numrat[0];



    int max=numrat[0];
        for(int i=0 ; i<n ; i++){
            if(numrat[i]>max){
                max=numrat[i];
            }
            if(numrat[i]<min){
                min=numrat[i];
            }

        }
            cout<<"Max :"<<max<<" "<<"Min: "<<min;











    return 0;
}