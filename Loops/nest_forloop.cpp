#include <iostream>

using namespace std;

int main(){

    //2
//    for(int r=1; r<=10; r++){
//         for(int c=1; c<=10; c++){
//             cout<<r*c<< " ";
//         }
//         cout<<endl;
//     }

    //3 
    int n;
    int count =0;
    cout<<"Enter any number\n";
    cin>> n;


    while(n%2==0 || n<5 || n>25){
        cout<<"Invaild \n";
        cout<< "Enter again \n";
        cin>>n;
    }
    for(int r=1; r<=10; r++){
        for(int c=1; c<=10; c++){
            if(r%2!=0 && c%2!=0){
                cout<<r*c<< " ";
            }
        }
        cout<<endl;
    }



}