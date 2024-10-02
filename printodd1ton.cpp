#include<iostream>
using namespace std;

void fun(int n){
    if(n==1){
        cout<<1<<endl;
        return;
    }
    fun(n-2);
    cout<<n<<endl;
}
int main(){
    int n;
    cin>>n;
    if(n%2==0){
        n--;
    }
    fun(n);
}