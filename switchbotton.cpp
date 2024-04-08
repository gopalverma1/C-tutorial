#include<iostream>
using namespace std;
int main (){
    char botton;
    cout<<"Enter the botton\n";
    cin>>botton;
    switch (botton)
    {
    case 'a':
    cout<<"Hello";
        break;
    case 'b':
    cout<<"Namaste";
        break;
    case 'c':
    cout<<"Bonjour";
        break;
    default:
    cout<<"I am still learning more!";
        break;
    }
    return 0;
}