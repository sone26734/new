#include<iostream>
using namespace std;

bool linearSearch(int arr[], int s, int key){
    for(int i = 0; i < s; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[10];
    int s;
    int key;
    cout<<"Enter the size of array\n";
    cin>>s;
    cout<<"Enter the element of the array\n";
    for(int i = 0; i < s;i++){
        cin>>arr[i];
    }
    cout<<"Enter the number which you are to find in the array\n";
    cin>>key;
    if(linearSearch(arr,s,key)){
        cout<<key<<" is present in the array"<<endl;
    }
    else{
        cout<<key<<" is not present in the array"<<endl;
    }
}