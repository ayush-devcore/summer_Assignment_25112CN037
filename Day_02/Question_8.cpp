//Write a program to Check whether a number is palindrome.

#include<iostream>
using namespace std;

int main(){
    int n,rev=0,rem,originalnum;
    cout<<"Enter a no.: ";
    cin>>n;

    originalnum=n;
    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(originalnum==rev){
        cout<<"The no. is palindrome."<<endl;
    }
    else{
        cout<<"The no. is not a palindrome."<<endl;
    }
    return 0;
}
