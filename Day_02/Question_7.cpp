//Write a program to Find product of digits.

#include<iostream>
using namespace std;

int main(){
    int n,product=1,rem;
    cout<<"Enter a no.: ";
    cin>>n;

    while(n>0){
        rem=n%10;
        product=product*rem;
        n=n/10;
    }
    cout<<"The product of digits is: "<<product<<endl;
    return 0;
}
