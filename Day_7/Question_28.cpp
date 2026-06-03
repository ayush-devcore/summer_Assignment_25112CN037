//Write a program to Recursive reverse number.

#include<iostream>
using namespace std;

int recursive_ReverseNumber(int n,int rev=0) {
    if(n==0) {
        return rev;
    }
    return recursive_ReverseNumber(n/10,rev*10+n%10);
}

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    
    if(n<0) {
        cout<<"Reverse of a negative number doesn't exist."<<endl;
    } else {
        cout<<"Reverse of "<<n<<" is "<<recursive_ReverseNumber(n)<<endl;
    }
    
    return 0;
}
