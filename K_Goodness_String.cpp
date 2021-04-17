#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    for(int j=1;j<=t;j++){
        int n,k,l,count=0;
        cin>>n>>k;
        string s;
        cin>>s;
        for(int i=0;i<n/2;i++)
        {
            if(s[i]!=s[n-i-1]){
                count++;
            }
        }
        cout<<"Case #"<<j<<": "<<abs(count-k)<<endl;
    }
}