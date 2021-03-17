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
        int N;
        cin>>N;
        int ar[N];
        for(int i=0; i<N; i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+N);
        int count=0,f=0;
        for(int i=0; i<N; i++){
            if(i+1-ar[i]<0){
                f=1;
                break;
            }
            count=count+(i+1-ar[i]);            
        }
        if(f==1){
            cout<<"Second"<<endl;            
        }else{
            if(count%2==1){
                cout<<"First"<<endl;
            }else{
                cout<<"Second"<<endl;
            }
        }


     }
}