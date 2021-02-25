//Write a program to write a simple calculator.
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int a,b;
    cout<<"Enter two number.\n";
    cin>>a>>b;
    cout<<"Enter the operator use between it.\n";
    char o;
    cin>>o;
    switch(o){
        case '+':
        cout<<a+b<<"\n";
        break;
        
        case '-':
        cout<<a-b<<"\n";
        break;
        
        case '*':
        cout<<a*b<<"\n";
        break;

        case '/':
        cout<<a/b<<"\n";
        break ;

        case '%':
        cout<<a%b<<"\n";
        break;
    }
        
    return 0;
}