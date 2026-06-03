//Write a program to Recursive Fibonacci.

#include<iostream>
using namespace std;

int recursive_Fibonacci(int n) {
    if(n<=1) {
        return n;
    }
    return recursive_Fibonacci(n-1)+recursive_Fibonacci(n-2);
}

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    
    if(n<0) {
        cout<<"Fibonacci of a negative number doesn't exist."<<endl;
    } else {
        cout<<"Fibonacci of "<<n<<" is "<<recursive_Fibonacci(n)<<endl;
    }
    
    return 0;
}
