#include <iostream>
using namespace std;

int main(){

    int user;
    int n;
    int sum =0;
    cout<<"Enter a non-negative number" << endl;   
    cin>>n; 
    while(n<0){
        cout<< "Invalid numbeer. Please choose a non-negative integer" <<endl;
        cin>> user;
        n++;
    }

    n =user ;

    while(n != 0){
        int last_digit = n %10;
        n = n/10;
        sum += last_digit;
    }
    cout<<" the sum of the digits of "<< user << "is" << sum<< endl;
    return 0;
}
