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
        int C;
        cin>>C;
        int temp = C;
        int i=0;
        while(temp>0){
            temp=temp/2;
            i++;            
        }
        int A = pow(2,i-1)-1;
        int B = A ^ C;
        cout<<A*B<<endl;
     }
}