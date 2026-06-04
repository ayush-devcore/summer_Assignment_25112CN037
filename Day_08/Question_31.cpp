/*Write a program to Print character triangle.
A
AB
ABC
ABCD
ABCDE
*/

#include<iostream>
using namespace std;

int main(){
    for(char i=65;i<=69;i++){       //used ASCII code here
        for(char j=65;j<=i;j++){    //for A-Z it is 65-90 and for a-z it is 97-122  
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
