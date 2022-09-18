#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter a number\n";
    cin>>a;
    char op;
    label:
    cout<<"Enter the operation which you want to perform(for exit press 'n')\n";
    cin>>op;
    if(op!='n'){
    cout<<"Enter the second number\n";
    cin>>b;}
    int value;
    switch (op)
    {
    case '+':
        a = a + b;
        goto label;
    case '-':
        a = a - b;
        goto label;
    case '*':
        a = a * b;
        goto label;
    case '/':
        a = a / b;
        goto label;
    
    case 'n':
        break;
    default:
        cout<<"Enter a valid operator\n";
        break;
    }
    cout<<"Your result is "<<a;

}