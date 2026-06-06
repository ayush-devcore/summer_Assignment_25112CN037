/*
Write a program to Print character pyramid.
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/

#include<iostream>
using namespace std;

int main(){
    int rows=5;

    for(int i=1;i<=rows;i++){
        for(int j=1;j<=5-i;j++){
            cout<<" ";
        }
        for(char k='A';k<'A'+i;k++){
            cout<<k;
        }
        for(char l='A'+i-2;l>='A';l--){
            cout<<l;
        }
        cout<<endl;
    }
    return 0;
}
