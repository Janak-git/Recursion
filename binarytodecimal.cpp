#include<iostream>
#include<cmath>
using namespace std;
int Deci(int n,int m){
    int static dec;
    if(n==0){
       
        return dec;
    }
   
        dec += (n%10)*pow(2,m);
       return  Deci(n/10,m+1);
    
}
int main(){
    int n;
    cin>>n;
   cout<< Deci(n,0);
    return 0;
}