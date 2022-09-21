#include<iostream>
using namespace std;

void update(int arr[], int s){
    arr[1] = 12;
    // for(int i = 0; i < s; i++){
    //     cout<<arr[i];
    // }
}

int main(){
    int arr[10];
    cout<<"Enter elements of array\n";
    for(int i = 0; i < 10; i++){
        cin>>arr[i];
    }
    cout<<"array elements before update\n";
    for(int i = 0; i < 10; i++){
        cout<<arr[i]<<" ";
    }
    update(arr,10);
    cout<<"\narray elements after update\n";
    for(int i = 0; i < 10; i++){
        cout<<arr[i]<<" ";
    }
}