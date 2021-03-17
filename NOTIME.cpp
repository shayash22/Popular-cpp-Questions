#include <bits/stdc++.h>
using namespace std;
#define m1 1000000007
//#define int long long
#define float double
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define mid(l, r) (l + (r - l) / 2)
#define loop(i, a, b) for(int i = (a); i<= (b); i++)
#define loopneg(i, a, b) for(int i = (a); i>= (b); i--)
#define arll(n) long long ar[n]
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
int32_t main(){
 
    fast
    int N,H,x,flag=0;
    cin>>N>>H>>x;
    vector<int>T;
    for(int i=0; i<N; ++i){
        int a;
        cin>>a;
        T.push_back(a);
    }
    for(int i=1; i<=N; ++i){
        if(T[i]+x==H){
            flag=1;
            break;
        }             
    }
    if(flag==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

