#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number\n";
    cin>>n;
    int p = 100;
    int v;
    label:
    switch (p)
    {
    case 100:
        v = n/p;
        n = n%p;
        p = 50;
        cout<<"100 Rs. are = "<<v<<endl;
        goto label;
    case 50:
        v = n/p;
        n = n%p;
        p = 20;
        cout<<"50 Rs. are = "<<v<<endl;
        goto label;
    case 20:
        v = n/p;
        n = n%p;
        p = 1;
        cout<<"20 Rs. are = "<<v<<endl;
        goto label;
    case 1:
        v = n/p;
        n = n%p;
        p = 0;
        cout<<"1 Rs. are = "<<v<<endl;
        goto label;
    
    default:
        break;
    }
}