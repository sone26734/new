#include<iostream>
using namespace std;

int isPrime(int n){
    for(int i = 2; i<=n/2;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    cout<<"Enter a number\n";
    cin>>n;
    if(isPrime(n)){
        cout<<n<<" is a prime number!"<<endl;
    }
    else{
        cout<<n<<" is not a prime number!"<<endl;
    }
}