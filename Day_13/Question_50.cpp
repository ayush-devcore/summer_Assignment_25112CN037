//Write a program to Find sum and average of array.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter "<<n<<" elements. ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<"The sum of the array is: "<<sum<<endl;

    float avg=(float)sum/n;
    cout<<"The average of the array is: "<<avg<<endl;
    
    return 0;
}
