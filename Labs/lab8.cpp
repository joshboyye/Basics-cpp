#include <iostream>
using namespace std;

int main(){
        
        int n;
        int c =1;

        if(c<1){
                cout<<"Invaild input.\n";
                cin >>n;
                c++;
        }while(n<0){
                  for(int i=1; i<=n; i++){
                        if(i%2==0){
                                cout << i <<endl;
                        }
                }
        }

        return 0;
}       


