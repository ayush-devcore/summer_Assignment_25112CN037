//Write a program to Input and display array.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter "<<n<<" Elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The elements in the array are: ";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
