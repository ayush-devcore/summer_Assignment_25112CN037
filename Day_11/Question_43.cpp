//Write a program to Write function to check prime.

#include<iostream>
using namespace std;

int isprime(int n){
    if(n<=1){
        return 0;
    }
    for(int i=2;i<=n;i++){
        if(n%2==0){
            return 0;
        }    
    }
    return 1;
}

int main(){
    int n;
    cout<<"Enter the number n: ";
    cin>>n;

    if(isprime(n)){
        cout<<n<<" is a prime number."<<endl;
    }
    else{
        cout<<n<<" is not a prime number."<<endl;
    }
    return 0;
}
