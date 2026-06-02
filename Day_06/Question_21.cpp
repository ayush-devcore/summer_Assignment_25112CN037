//Write a program to Convert decimal to binary.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int num,rem;
    string temp;
    cout<<"Enter the no.: ";
    cin>>num;

    if(num==0){
        cout<<" Binary no. is 0. ";
        return 0;
    }

    while(num>0){
        rem=num%2;
        temp+=to_string(rem);
        num=num/2;
    }
    reverse(temp.begin(), temp.end());
    cout<<" Binary no. is "<<temp;
    return 0;
}
