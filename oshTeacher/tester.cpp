#include <iostream>

using namespace std; 
char lower(char x) {
    return x + 32; // +32;
}
int main(){

    string x = "HELLO";
    for (int i = 0; i < x.length(); i++) {
        cout << lower (x[i]);
    }

    
return 0;
}