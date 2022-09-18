#include<iostream>
using namespace std;

int factorial(int num){
    int ans = 1;
    for(int i = 1; i<=num; i++){
        ans = ans * i;
    }
    return ans;
}

int nCr(int n, int r){
    int numer = factorial(n);
    int denom = factorial(r)*factorial(n-r);
    int ans = numer/denom;
    
    return ans;
}

int main(){
    int a,b;
    cout<<"Enter two numbers\n";
    cin>>a>>b;
    cout<<"Answer is "<<nCr(a,b)<<endl;
}