#include<iostream>
using namespace std;
int main (){
    int saving;
    cin>>saving;
    if(saving>5000){
        cout<<"Neha\n";
        if(saving>10000){
            cout<<"\n";
            cout<<"Roadtrip with Neha\n";
        } else {
           cout<<"Shopping with Neha\n";
        }
    }else if(saving>2000){
        cout<<"Rashi";
    } else{
        cout<<"Friends";
    }
    return 0;
}
