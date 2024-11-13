#include<iostream>
using namespace std;
int product(int arr[], int n){
    if(n==0) return 1;
    return arr[n]*product(arr,n-1);
}

int main(){
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<product(arr,n-1);
    return 0;
}