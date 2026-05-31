//Write a program to Print Armstrong numbers in a range.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int low, high;
    cout << "Enter the lower and upper limits: ";
    cin >> low >> high;

    cout << "Armstrong numbers between " << low << " and " << high << " are: ";
    for (int num = low; num <= high; num++) {
        int originalNum = num, remainder, result = 0, digits = 0;

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
            cout << num << " ";
        }
    }
    cout << endl;
    return 0;
}
