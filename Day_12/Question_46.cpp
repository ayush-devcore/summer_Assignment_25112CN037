#include <iostream>
using namespace std;

long long power(int base, int exp) {
    long long res = 1;
    for (int i = 0; i < exp; i++) {
        res *= base;
    }
    return res;
}

int isArmstrong(int n) {
    int temp = n, digits = 0;
    long long sum = 0;

    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    while (temp != 0) {
        int rem = temp % 10;
        sum += power(rem, digits);
        temp /= 10;
    }

    if (sum == n) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    if (isArmstrong(n)) {
        cout << "The no. is an Armstrong number.";
    } else {
        cout << "The no. is not an Armstrong number.";
    }
    return 0;
}