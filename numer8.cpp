#include <iostream>

using namespace std;


int main(){

    int n;
    cout<<"How many numbers? ";
    cin>>n;
    int nums[n];

    int target;
    int counter =0 ;

    cout<<"Whats your target?";
    cin>>target;

    for(int i =0 ;i<n;i++){
        cout<<"enter a number :";
        cin>>nums[i];

    }

    for(int i=0;i<n;i++){
        if(nums[i]==target){
            counter+=1;
        }

        

    }

        cout<<"Target: "<<target<<endl;
        cout<<"Counter: "<<counter;

















    return 0;
}