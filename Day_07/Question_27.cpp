//Write a program to Recursive sum of digits.

#include<iostream>
using namespace std;

int recursive_SumOfDigits(int n) {
    if(n==0) {
        return 0;
    }
    return (n%10)+recursive_SumOfDigits(n/10);
}

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    
    if(n<0) {
        cout<<"Sum of digits of a negative number doesn't exist."<<endl;
    } else {
        cout<<"Sum of digits of "<<n<<" is "<<recursive_SumOfDigits(n)<<endl;
    }
    
    return 0;
}