#include<iostream>
using namespace std;

void fun(int n){
    /* if(n%2!=0){
        cout<<"please enter even input";
        return;
    }*/
    if(n==2){
        cout<<2<<endl;
        return;
    }
   
    fun(n-2);
    cout<<n<<endl;

}
int main(){
    int n;
    cin>>n;
    if(n%2==1){
        n--;
    }

    fun(n);
}