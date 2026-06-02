//Write a program to Count set bits in a number. 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int num,rem,count=0;
    cout<<"Enter the no.: ";
    cin>>num;

    if(num==0){
        cout<<" No. of set bits is 0. ";
        return 0;
    }

    while(num>0){
        rem=num%2;
        if(rem==1){
            count++;
        }
        num=num/2;
    }
    cout<<" No. of set bits is "<<count;
    return 0;
}
