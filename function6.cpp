#include<iostream>
using namespace std;

int fib(int n){
    int a = 0;
    int b = 1;
    switch (n)
    {
    case 1:
        return a;
        break;
    case 2:
        return b;
        break;
    }
    int c;
    for(int i = 2; i<=n; i++){
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int main(){
    int n;
    cout<<"Enter a number\n";
    cin>>n;
    cout<<"Answer is "<<fib(n);
}