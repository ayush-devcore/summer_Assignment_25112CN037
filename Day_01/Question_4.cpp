//Write a program to Count digits in a number. 

#include<iostream>
using namespace std;

int main(){
    int n,count=0;
    cout<<"Enter a no.: ";
    cin>>n;

    while(n!=0){
        n=n/10;
        count++;
    }
    cout<<" Total digits in a no. is: "<< count <<endl;
    return 0;

}