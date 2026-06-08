//Write a program to Write function for palindrome.

#include<iostream>
using namespace std;

int isPalindrome(int n){
    int rev=0,temp,rem;
    temp=n;

    while(temp!=0){
        rem=temp%10;
        temp=temp/10;
        rev=rev*10+rem;
    }
    if(n==rev){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    if(isPalindrome(n)){
        cout<<"The no. is a palindrome number.";
    }
    else{
        cout<<"The no. is not a palindrome number.";
    }
    return 0;
}
