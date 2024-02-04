#include <iostream>

using namespace std; 

int main(){

    int n;
    string arr[26] = {"a","b","c","e","f","g","h","i","j"};
    cout<<"Enter any num \n";
    cin>>n;

    while(n<=0||n>=27){
        cout<<"Enter again\n";
        cin>>n;
    }
    for(int i=0; i<n; i++){
        cout<<"";
        
        for(int j=0; j<n-i; j++){
            cout<<arr[i];
        }
        cout<<endl;
    }


    return 0;
}