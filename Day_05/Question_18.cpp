//Write a program to Check strong number. 

#include<iostream>
using namespace std;

int main(){
    int n,sum=0,temp;
    cout<<"Enter the no.: ";
    cin>>n;
    temp=n;

    while(temp>0){
        int digit=temp%10;
        int fact=1;
        for(int i=1;i<=digit;i++){
            fact*=i;
        }
        sum+=fact;
        temp/=10;
    }
    if(sum==n && n>0){
        cout<<n<<" is a strong no. ";
    }
    else{
        cout<<n<<" is not a strong no. ";
    }
    return 0;
}