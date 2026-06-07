//Write a program to Write function to find maximum.

#include<iostream>
using namespace std;

int find_max(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    int a,b;
    cout<<"Enter the two numbers a and b: ";
    cin>>a>>b;

    cout<<"The maximum of a and b is: "<<find_max(a,b)<<endl;
    return 0;
}
