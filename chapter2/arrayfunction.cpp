#include<iostream>

using namepsace std;

int max(int a[], int capacity){
    int m =0; 
    for(int i=0; i<capacity; i++){
        if(a[i]>m) m=a[i];
    }
    return m;
}

int max2(int a[3][5],int row,int col){
    
}

int main(){


    int arr[5] ={3,1,4,1,5};

    cout<<max(arr,5)<<endl;

    return 0;
}