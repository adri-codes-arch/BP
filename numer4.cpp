#include <iostream>

using namespace std;

int main () {

    int n;
    cout<<"Sa pe do vargun"<<endl;
    cin>>n;

    int nums[10];

    for (int i=0;i<=n;i++){

        cout<<"shtypni nje numer :"<<endl;
        cin>>nums[i];
        if(nums[i]<0){
            cout<<"ju lutem shtypni nje numer pozitiv "<<endl;
            cin>>nums[i];
        }

      
        }
        int a,b;
        cout<<"Shtyp vlerat e a dhe b"<<endl;
        cin>>a>>b;
        int numratori=0;
        //numrat ma t mdhaj se a edhe ma t vogel se b
        
             for (int i=0;i<=n;i++){
                if(nums[i]>a && nums[i]<b){
                    numratori+=1;
                }
            }
                cout<<"Shifra e numrave mes "<<a<<" dhe "<<b<<" eshte "<<numratori;












    return 0;
}