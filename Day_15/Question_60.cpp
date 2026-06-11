//Write a program to Move zeroes to end. 

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int insert=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[insert]=arr[i];
            insert++;
        }
    }
    while(insert<n){
        arr[insert]=0;
        insert++;
    }
    cout<<"Array after moving zeroes to end: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
