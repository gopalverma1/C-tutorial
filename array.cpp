#include<iostream>
using namespace std;
//inisialization of array.
/*int main (){
    int array[4]={10,20,30,40};
    cout<<array[3];
}*/

int main (){
    // enter the nember of array.
    int n;
    cin>>n;
    int array[n];
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    for(int i=0; i<n; i++){
        cout<<array[i]<<" ";
    }
}