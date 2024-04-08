#include<iostream>
using namespace std;
int squareArea(int side){
    return side * side;
}
int rectangleArea(int length , int breadth){
    return length * breadth;
}
int main (){
    int side,length,breadth;
    cout<<"Enter the side of square"<<endl;
    cin>>side;
    cout<<("Enter the length and breadth of rectangle\n");
    cin>>length>>breadth;
    cout<<"Area of square is  "<<squareArea(side)<<endl;
    cout<<"Area of rectangle is  "<<rectangleArea(length,breadth);

}