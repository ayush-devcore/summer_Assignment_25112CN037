//Write a program to Create bank account system.

#include<iostream>
using namespace std;

struct bank_account{
    char account_holder[30];
    int account_number;
    float balance;
};

int main() {
    bank_account account1;
    
    cout << "Enter account holder name: ";
    cin.getline(account1.account_holder, 30);
    
    cout << "Enter account number: ";
    cin >> account1.account_number;
    
    cout << "Enter initial balance: ";
    cin >> account1.balance;
    
    cout << "\nAccount Details:\n";
    cout << "Account Holder: " << account1.account_holder << endl;
    cout << "Account Number: " << account1.account_number << endl;
    cout << "Balance: $" << account1.balance << endl;

    return 0;
}

