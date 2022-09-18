#include<iostream>
using namespace std;

void printTable(int n){
    for(int i = 1; i <= 10; i++){
        cout<<n<<" X "<<i<<" = "<<n*i<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter a number\n";
    cin>>n;
    printTable(n);
}