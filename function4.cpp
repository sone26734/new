#include<iostream>
using namespace std;

int AP(int n){
    return (3*n + 7);
}
 
int main(){
    int n;
    cout<<"enter a number\n";
    cin>>n;
    cout<<"Answer is "<<AP(n);
}