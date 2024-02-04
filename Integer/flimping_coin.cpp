#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    int h =0;
    while(h<5){
       int coin= rand() % 2;
       cout<<coin<< " ";
       if(coin ==1) h++;
    }
    cout<<endl;
    return 0;

}