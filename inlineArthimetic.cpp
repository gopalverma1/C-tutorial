#include<iostream>
using namespace std;
inline int add(int x , int y){
    return x + y;
}
inline int subs(int x,int y){
    return x - y;
}
inline int multi(int x,int y){
    return x * y;
}
inline int division(int x,int y){
    return x / y;
}
int main () {
    int x,y;
    cin>>x>>y;
    cout<<"addition of two numbers = "<<add(x,y)<<endl;
    cout<<"substraction of two numbers = "<<subs(x,y)<<endl;
    cout<<"multiplication of two numbers = "<<multi(x,y)<<endl;
    cout<<"division of two numbers = "<<division(x,y)<<endl;
}