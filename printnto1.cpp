#include<iostream>
using namespace std;

void fun(int n)
{
    if(n==1)
    {
        cout<<1;
        return;
    }
    cout<<n<<endl;
    fun(n-1);
    
}
int main(){
    int n;
    fun(5);
    return 0;
}