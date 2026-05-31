//Write a program to Check Armstrong number.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int num, originalNum, remainder, result = 0, digits = 0;
    cout << "Enter an integer: ";
    cin >> num;

    originalNum = num;
    while (originalNum != 0) { 
        digits++; originalNum /= 10; 
    }

    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += round(pow(remainder, digits)); 
        originalNum /= 10;
    }
    
    if (result == num){
        cout << num << " is an Armstrong number.\n";
    }
    else { 
        cout << num << " is not an Armstrong number.\n";
    }
    return 0;
}
