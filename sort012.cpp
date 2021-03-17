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
    int n,x=0,y=0,z=0;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]==0){
            x++;
        }
        if(a[i]==1){
            y++;
        }
        if(a[i]==2){
            z++;
        }
        
    }
    for(int i=0;i<x;i++){
        cout<<"0"<<endl;
    }
    for(int i=0;i<y;i++){
        cout<<"1"<<endl;
    }
    for(int i=0;i<z;i++){
        cout<<"2"<<endl;
    }


}    