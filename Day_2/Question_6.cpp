//Write a program to Reverse a number.

#include<iostream>
using namespace std;

int main(){
    int n,rev=0,res;
    cout<<"Enter a no.: ";
    cin>>n;

    while(n>0){
        res=n%10;
        rev=rev*10+res;
        n=n/10;
    }
    cout<<"The reverse of no. is: "<<rev<<endl;
    return 0;

}

