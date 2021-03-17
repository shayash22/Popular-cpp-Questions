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
        int n, e, h, a, b, c, index1, index2, o, k, i;
        cin>>n>>e>>h>>a>>b>>c;
        vector<int>v;
        vector<int>v1;
        for(i=0;i<=n+1;i++){
            v1.pb(i);
        }
        for(i=0; i<=n; i++){
            index1=lower_bound(v1.begin(), v1.end(), (2*n-e-2*i))-v1.begin();
            index2=upper_bound(v1.begin(), v1.end(), (h-3*i))-v1.begin()-1;
            if(index2<index1||index1==n+1){
                continue;
            }
            if(index2==n+1&&index2+3*i>h){
                continue;
            }
            if(c>a){
                k=(index1<(n-i)?index1 : (n-i));
            }
            else{
                k=(index2<(n-i)?index2:(n-i));
            }
            o=n-k-i;
            if(k+2*i>=2*n-e&&k+3*i<=h){
                v.pb(a*o+b*i+c*k);
            }
        }
        if(v.size()==0){
            cout<<"-1"<<endl;
        }
        else
        {
            int min=v[0];
            for(int j=0; j<v.size();j++){
                if(v[j]<min){
                    min=v[j];
                }
            
            }
            cout<<min<<endl;
        }

     }
}