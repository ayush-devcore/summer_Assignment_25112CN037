//Write a program to Write function for Fibonacci.

#include<iostream>
using namespace std;

int printFibonacci(int n){
    int first_term=0, second_term=1, next_term;
    cout<<"The Fibonacci series is: "<<first_term<<" "<<second_term<<" ";

    for(int i=2;i<=n;i++){
        next_term=first_term+second_term;
        cout<<next_term<<" ";
        first_term=second_term;
        second_term=next_term;
    }
}

int main(){
    int n;
    cout<<"Enter the number of terms: ";
    cin>>n;

    printFibonacci(n);
    return 0;
}
