#include <iostream>
#include <vector>
using namespace std;

int main(){

    double n;
    cout<<"Sa pe do vektorin? "<<endl;
    cin>>n;
    double shuma = 0;


    

    vector<int> uran;
    int num;

    for(int i =0 ; i<n  ;i++){
        cout<<"shtype ni vler: "<<endl;         // .size()=
        cin>>num;

        uran.push_back(num);
    }

    for(int i =0; i<uran.size() ;i++) {
        shuma+=uran[i];
        
        
    }

            cout<<"Mesatarja eshte : "<<  shuma/n;









return 0;


}