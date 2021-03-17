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
    int n1,n2;
    cin>>n1>>n2;
    int a[n1],b[n2];
    vector<int> c;
    for(int i=0; i<n1; i++){
        cin>>a[i];
        c.push_back(a[i]);
    }
    for(int i=0; i<n2; i++){
        cin>>b[i];
        c.push_back(b[i]);        
    }
    sort(all(c));
    vector<int>d;
    d.push_back(c[0]);
    for(int i=1; i<c.size(); i++){
        if(c[i]!=c[i-1]){
            d.push_back(c[i]);
        }
    }
    cout<<d.size()<<endl;
}    