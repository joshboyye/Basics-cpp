#include <iostream>
#include <string>

using namespace std;

int main(){
    int a,b,c;
    cout<< "Enter your grade: \n";
    cin>>a;

    if(a>=96){
        cout<< "Your grade is A \n";
    }else if(a>=85){
        cout<< "Your grade is B \n";
    }else if(a>=75){
        cout<< "Your grade is C \n";
    }else if(a>=65){
        cout<< "Your grade is D \n";
    }else{
        cout<< "Your grade is F \n";
    }

}