#include <iostream>

using namespace std;

void print( int x){

    cout<<x<<endl;
   // std :: cout<<x;
}

int main(){
    string a ="hello";
    for(int i =0; i<a.size(); i++){
        cout<<i<<endl;
    }

    print(10);
    return 0;
}