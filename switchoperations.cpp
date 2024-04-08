#include<iostream>
using namespace std;
//implement the calculator using switch case.
int main (){
    int n1,n2;
    cout<<"Enter the two values\n";
    cin>>n1>>n2;
    char operation;
    cin>>operation;
    switch (operation)
    {
    
    case '1':
        cout<<n1+n2;
        break;
    case '2':
        cout<<n1-n2;
        break;
    case '3':
        cout<<n1*n2;
        break;
    case '4':
        cout<<n1/n2;
        break;
    default:
    cout<<"Opertion doesn't exist";
        break;
    }
}