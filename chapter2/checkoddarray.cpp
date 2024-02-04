#include <iostream>

using namespace std;

//questions 왜  int a[]여기 않에 아무것도 안넣지? 
//왜 int 나 void 가 아니고 string 으로 시작 하지? 

string allOdd(int a[][2],int row,int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<2; j++){
            if(a[i][j]%2==1) return "All odd";
        }
    }
    return "not all odd";
}

int main(){
    int x[2][2] = {{1, 3}, {5, 7}};
    cout << allOdd(x, 2, 2) << endl;

    return 0;
}