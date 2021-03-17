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
 
    int n;
    cin>>n;
    int a[n];    
    for(int i=0;i<n;i++){
        cin>>a[i];        
    }
    int mini=a[0];
    int maxi=a[0];
    for(int i=0;i<n;i++){
        if(a[i]<=mini){
            mini=a[i];
        }
        if(a[i]>=maxi){
            maxi=a[i];
        }        
    }
    cout<<"Mini"<<mini<<endl;
    cout<<"Maxi"<<maxi<<endl;
    
}