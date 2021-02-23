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
    ll num,rev=0,rem;
    cin>>num;
    do{
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }while(num!=0);
    cout<<"Reverse of the number is "<<rev;
    return 0;
}