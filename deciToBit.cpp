#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number\n";
    cin>>a;
    int b = 0;
    int i = 0;
    while(a!=0){
        int bit = a & 1;
        b = (bit * pow(10,i)) + b;
        i++;
        a = a>>1;
    }
    cout<<b;
}