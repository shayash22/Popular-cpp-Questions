#include <bits/stdc++.h>
using namespace std;
#define m1 1000000007
#define int long long
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
    
    int t;
    cin>>t;
    while(t--){
        string s,a,b;
        int d;    
        cin>>s;
        d=s.size()/2;
        if(s.size()%2==0){
            a=s.substr(0,d);
            b=s.substr(d,d);
        }
        else{
            a=s.substr(0,d);
            b=s.substr(d+1,d);            
        }
        sort(all(a));
        sort(all(b));
        if(a.compare(b)==0){
            cout<<"YES\n";        
        }
        else{
            cout<<"NO\n";
        }

     }
     return 0;
}