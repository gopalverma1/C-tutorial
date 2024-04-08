#include<iostream>
using namespace std;
int main (){
    int a[5];
    cout<<"Enter the numbers"<<endl;
    for(int i=0; i<5; i++){
        cin>>a[i];
    }
    int count = 0;
    while(count<a[0]){
        if(a[0]<a[1]){
            int temp = a[0];
            a[0] = a[1];
            a[1] = temp;
        }
        
    }
    count++;
    for(int i =0; i<5; i++){
        cout<<a[i]<<endl;
    }

}