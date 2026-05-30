//Write a program to Check whether a number is prime.

#include<iostream>
using namespace std;

int main() {
    int n,count=0;
    cout<<"Enter a No.: ";
    cin>>n;

    for(int i=1;i<=n;i++) {
        if(n%i==0) {
            count++;
        }
    }

    if (count==2) {
        cout<<"The no. is prime." <<endl;
    } else {
        cout<<"Not a Prime." <<endl;
    }

    return 0;
}
