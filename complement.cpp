#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number\n";
    cin>>n;
    int a = n;
    int mask = 0;
    while(n!=0){
        n = n>>1;
        mask = (mask<<1)|1;
    }
    int ans = mask & (~a);
    cout<<ans;
}