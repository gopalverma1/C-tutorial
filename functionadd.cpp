#include<iostream>
using namespace std;
int addition(int x,int y);

int main (){
    int x,y;
    int sum ;
    cout<<"enter the first digit\n";
    cin>>x;
    cout<<"enter the second digit\n";
    cin>>y;
    int s=addition(x,y);
    cout<<x+y;
    return 0;
}
int addition(int x ,int y){ 
    return x+y;
}