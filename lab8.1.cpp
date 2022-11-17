#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter a posltive integer" <<endl;
    cin>> n;
    while(n<0){
        if(n<0){
            cout<<"invaild";
            cout<< "enter a postive numbeer \n"; 
            cin>>n;
        }
    }
    for(int i=0; i<n; i++){
        if(i%2==1){
            cout<< i << endl;
        }
    }

    return 0;
}

