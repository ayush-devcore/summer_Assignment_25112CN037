//Write a program to Second largest element.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter "<<n<<" elements. ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int largest=0,second_largest=0;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            second_largest=largest;
            largest=arr[i];
        }
        else{
            if(arr[i]>second_largest && arr[i]!=largest){
                second_largest=arr[i];
            }
        }
    }
    cout<<"Second largest element is "<<second_largest<<endl;
    return 0;
}
