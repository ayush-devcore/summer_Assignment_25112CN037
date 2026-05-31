//Write a program to Print prime numbers in a range.

#include<iostream>
using namespace std;

int main() {
    int num1,num2,count=0;
    cout<<"Enter the range: ";
    cin>>num1>>num2;

    for(int i=num1;i<=num2;i++) {
        count=0;
        for(int j=1;j<=i;j++) {
            if(i%j==0) {
                count++;
            }
        }
        if(count==2) {
            cout<<i<<" ";
        }
    }

    return 0;
}
