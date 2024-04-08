#include<iostream>

using namespace std;
int fact(int n);

int main(){
    int n;
    fact(n);
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<fact;
    return n;
}
int fact(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact = fact * i;
    cout<<fact;
    }
}