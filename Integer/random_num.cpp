#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int t= time(0);
    srand(t);
    cout<<t<endl;
   // int a= rand()% 6+1;

    // for(int i =0; i<5; i++){
    //     cout<< rand()% 6+1<< " " ;
    // }
    cout<<endl;
    return 0;

}