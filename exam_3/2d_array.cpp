#include <iostream>

using namespace std;

int main(){

    int arr[4][5] = {{32,34,32,32},{32,44,554,23,33}};


    for(int i =0; i<4; i++){
        for(int j=0; j<5; j++){
            cout<<arr[i][j]<<endl;
        }
    }
    return 0;

}