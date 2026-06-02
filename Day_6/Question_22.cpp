//Write a program to Convert binary to decimal. 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int num,rem,decimal=0,base=1;
    cout<<"Enter the no.: ";
    cin>>num;

    if(num==0){
        cout<<" Decimal no. is 0. ";
        return 0;
    }

    while(num>0){
        rem=num%10;
        decimal+=rem*base;
        base*=2;
        num=num/10;
    }
    cout<<" Decimal no. is "<<decimal;
    return 0;
}
