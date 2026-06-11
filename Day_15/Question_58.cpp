//Write a program to Rotate array left. 

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter thr size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter "<<n<<" elements. ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int temp=arr[0];
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    cout<<"Left Rotated Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
