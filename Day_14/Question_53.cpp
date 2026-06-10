//Write a program to Linear search.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<" Enter "<<n<<" elements. ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int target;
    cout<<"Enter the element to find: ";
    cin>>target;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            cout<<" Element found at index "<<i<<endl;
            return 0;
        }
    }
    cout<<"Element not found in the array."<<endl;
    return 0;
}
