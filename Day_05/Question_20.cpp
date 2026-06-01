//Write a program to Find largest prime factor.

#include<iostream>
using namespace std;

int main(){
    int n,largest=0;
    cout<<"Enter the no.: ";
    cin>>n;

    for(int i=2; i*i<=n; i++){
        while(n%i==0){
            largest=i;
            n/=i;
        }
    }
    if(n>1){
        largest=n;
    }
    cout<<"The largest prime factor is: "<<largest;
    return 0;
}
