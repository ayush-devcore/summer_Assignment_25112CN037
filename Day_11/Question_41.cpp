//Write a program to Write function to find sum of two numbers.

#include<iostream>
using namespace std;

int sum(int a,int b){
    return a+b;
}

int main(){
    int a,b;
    cout<<"Enter the two numbers a and b: ";
    cin>>a>>b;

    cout<<"The sum of a and b is: "<<sum(a,b)<<endl;
    return 0;
}
