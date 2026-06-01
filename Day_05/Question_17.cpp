//Write a program to Check perfect number.

#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cout<<"Enter the no.: ";
    cin>>n;

    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n && n>0){
        cout<<n<<" is a perfect no. ";
    }
    else{
        cout<<n<<" is not a perfect no. ";
    }
    return 0;
}
