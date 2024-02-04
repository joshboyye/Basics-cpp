#include <iostream>
#include <string>

using namespace std;

int main(){

    int n;
    int sum;
    int count;
    int composite;
    cout<<" Enter a postive integer \n";
    cin>>n;
    
    while(n<0){
        if(n<0){
            cout<<"invaild";
            cout<< "enter a postive numbeer \n"; 
            cin>>n;
        }
    }
    //checking zeros 
    /*
    while(n != 0){
        int last_digit = n %10;
        n = n/10;
        sum += last_digit;
    }
    cout<<n<<endl; 
    */

    //checking prime numbers 
    for(int i =2; i<n; i++){
        int count =0;
        for(int j =2; j<i/2; j++){
            if(n%j==0){
                count=1; 
                break;
            }
        }
        if(count==0) cout<<i<< "is all the prime numbers \n"; 
    }
    cout<<endl;
    // checking composite number 
    for(int i=0; i<n; i++){
        if(n%2==0){
            composite++;
        }
        
    }
    if(composite>2){
            cout<<n<<"is a composite numbers";
        }else{
            cout<< n<< "is not a composite numbers";
    }



    return 0;

}