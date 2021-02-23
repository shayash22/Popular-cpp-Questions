#include <bits/stdc++.h>
using namespace std;
#define m1 1000000007
#define ll long long
#define vi vector<int>
#define mid(l, r) (l + (r - l) / 2)
#define loop(i, a, b) for(int i = (a); i<= (b); i++)
#define loopneg(i, a, b) for(int i = (a); i>= (b); i--)
#define arll(n) long long ar[n]
 
int main(){
    ll num,rev=0,rem,temp;
    cin>>num;
    temp=num;
    do{
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }while (num!=0);
    if(temp==rev)cout<<"Yes it is Palindrone.";
    else cout<<"No it is not a Palindrone.";
    
    return 0;
}