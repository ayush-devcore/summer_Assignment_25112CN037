//Write a program to Create student record system using arrays and strings.

#include<iostream>
using namespace std;

struct Student{

    int roll_no;
    string name;
    float marks;
    string course;
};

int main(){
    
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student students[n];

    for(int i = 0; i < n; i++){
        cout << "Enter details for student " << i+1 << endl;
        cout << "Roll Number: ";
        cin >> students[i].roll_no;
        cout << "Name: ";
        cin.ignore();
        getline(cin, students[i].name);
        cout << "Marks: ";
        cin >> students[i].marks;
        cout << "Course: ";
        cin.ignore();
        getline(cin, students[i].course);
    }

    cout << "\nStudent Records:\n";
    for(int i = 0; i < n; i++){
        cout << "Student " << i+1 << ":\n";
        cout << "Roll Number: " << students[i].roll_no << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Marks: " << students[i].marks << endl;
        cout << "Course: " << students[i].course << endl;
    }

    return 0;
}

