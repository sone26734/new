#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number\n";
    cin>>n;
    int m = 1;
    int p = 0;
    for(int i = 0; i<=30;i++){
        if(m==n){
            p++;
            break;
        }
        
        if(m<=n && m>INT32_MAX/2){
            cout<<"false";
        }
        m = m*2;
    }
    if(p==0){
        cout<<"false";
    }
    else{
        cout<<"true";
    }
}