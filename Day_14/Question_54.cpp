//Write a program to Frequency of an element. 

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

    int target,frequency=0;
    cout<<"Enter the element whose frequency to be find: ";
    cin>>target;

    for(int i=0;i<n;i++){
        if(arr[i]==target){
            frequency++;
        }
    }
    cout<<"Frequency of "<<target<<" is "<<frequency<<endl;
    return 0;
}
