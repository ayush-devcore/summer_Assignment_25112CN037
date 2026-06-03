//Write a program to Recursive factorial. 

#include<iostream>
using namespace std;

int recursive_Factorial(int n) {
    if(n<=1) {
        return 1;
    }
    return n*recursive_Factorial(n-1);
}

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    
    if(n<0) {
        cout<<"Factorial of a negative number doesn't exist."<<endl;
    } else {
        cout<<"Factorial of "<<n<<" is "<<recursive_Factorial(n)<<endl;
    }
    
    return 0;
}
