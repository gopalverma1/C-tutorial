#include<iostream>
using namespace std;
int main (){
    char botton;
    cout<<"Enter the botton\n";
    cin>>botton;
    if(botton =='a'){
        cout<<"Hello";
    } else if(botton == 'b'){
        cout<<"Namaste";
    } else if(botton=='c'){
        cout<<"Bonjour";
    } else {
        cout<<"Still is learning";
    }
    return 0;
}