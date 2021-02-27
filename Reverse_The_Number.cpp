#include <bits/stdc++.h>
using namespace std;
#define m1 1000000007
#define ll long long
#define db double
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) cc.begin(), c.end()
#define mid(l, r) (l + (r - l) / 2)
#define loop(i, a, b) for(int i = (a); i<= (b); i++)
#define loopneg(i, a, b) for(int i = (a); i>= (b); i--)
#define arll(n) long long ar[n]
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
int32_t main(){
 
    //fast
    int t;
    cin>>t;
    while(t--){
        int n;        
        cin>>n;
        int reve=0;
        while (n>0)
        {            
            reve=reve*10+n%10;
            n/=10;
            
        }
        cout<<reve<<"\n";
        
     }
}