//Write a program to Write function to find factorial.

#include<iostream>
using namespace std;

int find_factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*find_factorial(n-1);
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"The factorial of "<<n<<" is: "<<find_factorial(n)<<endl;
    return 0;
}
