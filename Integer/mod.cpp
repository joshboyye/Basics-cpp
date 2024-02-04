#include <iostream>
using namespace std;

int main(){
    int x,y;
    int sum;

    cout<< "Enter any two numbers" <<endl;
    cin>> x;
    cin>>y;
    for(int i=x; i<=y; i++ ){
        if(y%2==0 && y!=0){
            cout<< i<<endl;
         }
    }
}

