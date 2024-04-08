#include<iostream>
using namespace std;
// break and continue statement. 
int main (){
    int pocketMoney = 3000;
    for(int date=1; date<=30;date++){
        if(date%2==0){
            continue;
        }
        if(pocketMoney ==0){
            break;
        }
    }
        cout<<"Go out today";
        pocketMoney = pocketMoney - 300;
    return 0;
}