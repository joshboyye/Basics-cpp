#include <iostream>
#include<cmath>
using namespace std;

int main() {

int n;
cout << "What is n?";
cin>>n;
    for (int r = 1; r>=n; r--) {
        for (int c = 1; c<=r; c++) {
            if (r!=0){
                cout << "*";
                } 
            }
    cout<<endl;
        }
    return 0;
}  