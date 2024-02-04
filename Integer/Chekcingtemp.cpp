#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int temp_check(int ny, int la){
        
        cout<<"enter the temperature in New York \n";
        if(ny>la){
            cout<<"Liar!\n";
        }else{
            cout<<"You need to take a vaction\n";
        }
        return ny;
}   


int main(void){
    cout<<temp_check(32,35);
    // int ny,la;
    // cout<<"enter the temperature in New York \n";
    // cin>>ny;
    // cout<< "Enter the temperature in LA\n";
    // cin>>la;

    // if(ny>la){
    //     cout<<"Liar!\n";
    // }else{
    //     cout<<"You need to take a vaction\n";
    // }

    return 0;
}

