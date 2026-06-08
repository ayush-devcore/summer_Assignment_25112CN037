//Write a program to Write function for perfect number.

#include<iostream>
using namespace std;

int isPerfect(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    if(isPerfect(n)){
        cout<<"The no. is a perfect number.";
    }
    else{
        cout<<"The no. is not a perfect number.";
    }
    return 0;
}