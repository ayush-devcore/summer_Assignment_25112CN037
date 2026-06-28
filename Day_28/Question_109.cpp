//Write a program to Create library management system.

#include<iostream>
#include<string>
using namespace std;

struct library{
    char book_name[20];
    char author[20];
    int pages;
    float price;
};

int main() {
    library book1;
    
    cout << "Enter book name: ";
    cin.getline(book1.book_name, 20);
    
    cout << "Enter author name: ";
    cin.getline(book1.author, 20);
    
    cout << "Enter number of pages: ";
    cin >> book1.pages;
    
    cout << "Enter price: ";
    cin >> book1.price;
    
    cout << "\nBook Details:\n";
    cout << "Book Name: " << book1.book_name << endl;
    cout << "Author: " << book1.author << endl;
    cout << "Pages: " << book1.pages << endl;
    cout << "Price: $" << book1.price << endl;

    return 0;
}

