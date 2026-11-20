#include <iostream>

using namespace std;

int main(){
    int x;
    int y;
    int fuqizimi=1;

    
    cout<<"Sa eshte baza e numrit qe do ta fuqizosh? ";
    cin>>x;
    cout<<"Sa eshte eksponenti? ";
    cin>>y;

    for (int i =1;i<=y;i++){
        fuqizimi*=x;
    }
        cout<<x<<" ne fuqi "<<y<<" eshte "<<fuqizimi;











    return 0;
}