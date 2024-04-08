#include<iostream>
using namespace std;
int fib(int n);

int main(){
    int n;
    fib(12);  
}
int fib(int n){
    if(n==0){
        return 0;
    } if(n==1){
        return 1;
    }
    int fibnm1 = fib(n-1);
    int fibnm2 = fib(n-2); 
    int fibn = fibnm1 + fibnm2;
    cout<<fibn<<n;
}