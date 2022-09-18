#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number\n";
    cin>>n;
    int prod = 1;
    int sum = 0;
    int sub;
    while(n){
        int t;
        t = n % 10;
        prod = prod * t;
        sum = sum + t;
        n = n/10;
    }
    sub = prod - sum;
    cout<<prod<<endl;
    cout<<sum<<endl;
    cout<<sub;
}