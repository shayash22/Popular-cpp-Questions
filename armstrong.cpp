#include <bits/stdc++.h>
#include <math.h>
using namespace std;

#define ll long long

 
int main(){
    ll num,rem,sum=0;
    cin>>num;
    ll store=num;
    do{
        rem=num%10;
        sum+=pow(rem,3);
        num/=10;
    }while(num!=0);
    if(sum==store){
        cout<<"Yes it is armstrong number."<<endl;
    }
    else cout<<"No it is not armstrong number."<<endl;
    return 0;
}