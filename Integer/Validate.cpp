#include <iostream>
using namespace std;

int main(){
    int e =0;
    int o=0;
    int n;

    cout<<"Neter an n-digit positive numver: " <<end;
    cin >>n;

    while(n !=0){
        int last_digit =n%10;

        if(last_digit % 2==0){
            e++;
        }else{
            o++;
        }
        n = n/10;
    }

    cout<< "number of even digits : " <<e << endl;
    cout<< "number of odd diggits : " << o << endl;
    
    return 0;

}