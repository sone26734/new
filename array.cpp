#include<iostream>
using namespace std;
int main(){
    int arr[10];
    cout<<"Enter elements of array\n";
    for(int i = 0; i < 10; i++){
        cin>>arr[i];
    }
    int minmm = arr[0];
    int maxmm = INT_MIN;
    for(int i = 0; i < 10; i++){
        // if(minmm>arr[i]){
        //     minmm = arr[i];
        // }
        minmm = min(minmm,arr[i]);

        // if(maxmm<arr[i]){
        //     maxmm = arr[i];
        // }
        maxmm = max(maxmm,arr[i]);
    }
    cout<<"Minimum value of array is "<<minmm<<endl;
    cout<<"Maximum value of array is "<<maxmm<<endl;

    
}