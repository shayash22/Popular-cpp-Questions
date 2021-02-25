#include <bits/stdc++.h>
using namespace std;

#define ll long long

 
int main(){
    ll sum=0,num;
    cin>>num;
    do{
        sum+=num%10;
        num=num/10;
    }while(num!=0);
    cout<<"The sum of number is "<<sum;

    return 0;
}