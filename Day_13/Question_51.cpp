//Write a program to Find largest and smallest element.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter "<<n<<" elements. ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max_sum=arr[0];
    int min_sum=arr[0];

    for(int i=1;i<n;i++){
        if(arr[i]>max_sum){
            max_sum=arr[i];
        }
        else{
            if(arr[i]<min_sum){
                min_sum=arr[i];
            }
        }
    }
    cout<<"The largest element in the array is: "<<max_sum<<endl;
    cout<<"The smallest element in the array is: "<<min_sum<<endl;

    return 0;
}
