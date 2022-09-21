#include<iostream>
using namespace std;

int findSum(int arr[], int s){
    int sum = 0;
    for(int i = 0; i < s; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int arr[10];
    int s;
    cout<<"Enter the size of the array\n";
    cin>>s;
    cout<<"Enter the element of the array\n";
    for(int i = 0; i < s; i++){
        cin>>arr[i];
    }
    cout<<"Sum of all the elements of array is = "<<findSum(arr,s);
}