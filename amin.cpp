#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n;
    vector<int> avnia;
    
    int num;


    int maxIndex;
    cout<<"Sa pe do vektorin "<<endl;
    cin>>n;

    for(int i =0; i<n ;i++) {
        cout<<"Shtype nje numer "<<endl;
        cin>>num;

        avnia.push_back(num);

    }

    int max=avnia[0];
    int min=avnia[0];

    for(int i =0; i<avnia.size() ; i++){
        if (avnia[i]>max){
            max=avnia[i];
            maxIndex=i;
        }
        if(avnia[i]<min){
            min=avnia[i];
        }
    }
    cout<<"max : "<<max<<endl;
    cout<<"min : "<<min<<endl;
    cout<<"Index : "<<maxIndex;



















return 0;
}