#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number\n";
    cin>>n;
    // cout<<n;
    int i = 1;
    while(i<=n){
        int j =1;
        int s = 2*i-2;
        while (j<=n-i+1)
        {
            cout<<j;
            j++;
        }
        while (s>=1)
        {
            cout<<"*";
            s--;
        }
        j--;
        while (j>=1)
        {
            cout<<j;
            j--;
        }
        cout<<endl;
        i++;
        
    }
    return 0;
}