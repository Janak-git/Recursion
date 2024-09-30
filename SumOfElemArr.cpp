#include<iostream>
using namespace std;
int sumarr(int arr[],int n){
if(n<=0)
    return 0;
return (sumarr(arr,n-1)+(n-1));
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n = 10;
    int sum = sumarr(arr, n);
    cout << "Sum of array elements: " << sum << endl;
    return 0;
}

