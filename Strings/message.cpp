#include <iostream>
using namespace std;

int main(){
    string a;
    cout<<"enter a message\n";
    cin>>a;
    int b =0;
    while(b<1){
        if(a.size()>8){
            cout<<"Enter a message less then 8 char\n";
            cin>>a;
        }else{
            cout<<a<<endl;
            b++;
        }
    }
}