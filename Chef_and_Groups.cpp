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
    int t=1;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int a=0;
        if(s[0]=='1'){
            a+=1;
        }
        for(int i=1;i<s.size();i++){
            if(s[i]=='1' && s[i]!=s[i-1]){
                a+=1;
            }
        }
        cout<<a<<endl;
     }
}