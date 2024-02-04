#include<iostream>
#include<cmath>
#include<string>
using namespace std;


int main(){
    int count =1;
    double n;
    int e =0;

    do
    {

    
        if(count> 1){
            cout<<"Invlid Number! \n";
        }

            cout<<"Enter number between 2 and 5 \n";
            cin >> n;
            count++;

            while(n<2 || n>5){
                
                count =0;
                    while(e<11){
                    cout<<pow(n,e) <<endl;
                    e++;
                }
        }   
       
    }
    return 0;
}