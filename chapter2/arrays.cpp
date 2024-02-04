#include <iostream>

using namespace std;

int main(){

    string arr[5] ={"there ","is ","some ","one ","I love"};
    
    int intArr[3] ={2,3,4};
    for(int i=0; i<sizeof(intArr) / sizeof(int); i++){
        cout<<intArr[i]<<endl;
    }
//     int myNumbers[5] = {10, 20, 30, 40, 50};
//   for (int i = 0; i < sizeof(myNumbers) / sizeof(int); i++) {
//     cout << myNumbers[i] << "\n";
//   }

    return 0;
}