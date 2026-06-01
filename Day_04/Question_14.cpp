//Write a program to Find nth Fibonacci term.

#include<iostream>
using namespace std;

int main(){
    int n,t1=0,t2=1,next_term=0;
    cout<<"Enter the no. to find: ";
    cin>>n;

    if(n == 1) {
        next_term=t1;
    }
    else if(n == 2) {
        next_term=t2;
    }
    else{
        for(int i=3;i<=n;i++) {
            next_term=t1+t2;
            t1=t2;
            t2=next_term;
        }
    }

    cout<<"Term "<<n<<" is: "<<next_term<<endl;
    return 0;
}
