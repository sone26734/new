#include<iostream>
#include<math.h>
using namespace std;

int bit(int n){
    int b = 0;
    int i = 0;
    while(n!=0){
        int bit = n & 1;
        if((bit * pow(10,i))){
            b++;
        }
        i++;
        n = n>>1;
    }
    return b;
}

int count(int n, int m){
    int ans = 0;
    ans =  bit(m) + bit(n);
    return ans;
}

int main(){
    int a, b;
    cout<<"Enter two numbers\n";
    cin>>a>>b;
    cout<<"Answer is "<<count(a,b);
}