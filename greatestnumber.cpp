#include<iostream>
using namespace std;
int main (){
    int x;
    int y;
    int z;
    cout<<"Enter the first number"<<endl;
    cin>>x;
    cout<<"Enter the second number"<<endl;
    cin>>y;
    cout<<"Enter the third number"<<endl;
    cin>>z;
    (x>y)?cout<<"It is greatest number\n"<<x<<endl:cout<<"It is the smallest number"<<y<<endl;
    //(y>z)?cout<<"It is greatr number"<<y<<endl :cout<<"It is the smallest number\n"<<z;
}