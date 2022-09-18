#include<iostream>
#include<math.h>
using namespace std;
int main( ){
    int n;
    cout<<"Enter a binary number\n";
    cin>>n;
    int a = 0;
    int i = 0;
    while(n!=0){
        int t = n % 10;
        n = n / 10;
        if(t==1){
            a = a + (pow(2,i));

        }
        i++;
    }
    cout<<a;
}