// // Write a program to Calculate sum of first N natural numbers.

#include<iostream>
using namespace std;

int main() {
    long long n; 
    cout<<"Enter a No.: ";
    cin>>n;

    long long sum = n*(n + 1)/2; 
    
    cout << "The sum of " << n << " Natural No. is " << sum << endl;
    return 0;
}
