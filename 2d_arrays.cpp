#include <iostream>
#include <iomanip>
#include <vector>


using namespace std;

int main () {

    //c-Style arrays
    const int n = 3;
    double nums[n] = {1 , 2 , 3 };

    //difference between vectors and arrays is that with a vector we can add elements even if they are not apart of it initially

    //u have to call the vector library

    vector<int> some_nums = {4 , 5 , 6 ,20};

    cout<<some_nums.front()<<endl;
    cout<<some_nums.back()<<endl;
    cout<<some_nums.empty()<<endl;

    for (int i =0;i<some_nums.size() ;i++) {
        cout<<some_nums[i]<< " ";

    }
        cout<<endl<<endl;
        //.push_back     .pop_back .size                                                    
        vector<double> some_double_nums = {2.3 , 4.5 , 35.6};
        for (int i =0;i<4 ;i++) {
        cout<<some_double_nums[i]<< " ";
        }
        cout<<endl;









    return 0;
}