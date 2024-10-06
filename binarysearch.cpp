#include<iostream>
using namespace std;
int binary(int arr[],int l,int h, int x){
    if(h>=l){
        int m=(l+h)/2;
        if (arr[m]==x) return m;
        if(arr[m]>x) return binary(arr,l,m-1,x);
        return binary(arr,m+1,h,x);
        cout<<"found";
        } 
        else{
            return -1;
        }
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int h = sizeof(arr)/sizeof(arr[0]);
    int x;
    cin>>x;
    cout<<binary(arr,0,h-1,x);
    
    
    return 0;
}