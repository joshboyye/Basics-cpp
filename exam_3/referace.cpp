#include <iostream>

using namespace std;

void a(int&x, int y){
    x=y;
    y=x+1;
}

int main(){

    int x =2;
    int y=6;

    a(x,y);

    cout<<x<<endl;

    return 0;


}