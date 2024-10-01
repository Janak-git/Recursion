#include<iostream>
using namespace std;

void fun(int n){
    if(n==2){
        cout<<2;
        return;
    }
    cout<<n<<endl;
    fun(n-2);

}
int main(){
    int n=11;
    fun(n);
}