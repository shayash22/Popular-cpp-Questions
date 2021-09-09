#include<iostream>
using namespace std;

int main(){
    int n,rev=0,rem;
    cin>>n;
    int num=n;
    do
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }while(n!=0);
    if(num==rev){
        cout<<"Number is pallendrom.";
    }
    else{
        cout<<"Number is not pallendrome";
    }

    return 0;
}