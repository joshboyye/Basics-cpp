#include <iostream>
using namespace std;

int main(){
    string pokemon;
    int y;
    string picahu = "picahu";
    cout<< "Enter any word"<< endl; 
    cin>> pokemon ;
    int x = pokemon.compare(picahu);
    
    cout<<x<<endl;
    while(y!=0){
        if(x==1){
            cout<< "Your favoirt pokemon is picahu " <<endl;
            y+=1;
        }else{
            cout<<"try again"<<endl;
            cin>> pokemon ;
        }

    }

    return 0;

}