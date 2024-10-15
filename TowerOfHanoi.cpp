#include<iostream>
using namespace std;
void tower(int n,char a,char b,char c){
    if(n==0) return;
    tower(n-1,a,c,b);
    cout<<a<<"->"<<c<<endl;
    tower(n-1,b,a,c);

}

int main(){
    int n;
    cin>>n;
    tower(n,'A','B','C');
    return 0;
}