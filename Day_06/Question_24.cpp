//Write a program to Find x^n without pow().

#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,n;
    cout<<"Enter the value of x and n: ";
    cin>>x>>n;

    int value=1;
    for(int i=1;i<=n;i++){
        value*=x;
    }
    cout<<x<<"^"<<n<<" is "<<value;
    return 0;
}
