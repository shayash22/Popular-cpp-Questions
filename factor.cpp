#include <bits/stdc++.h>
using namespace std;
#define m1 1000000007
#define ll long long
#define vi vector<int>
 
int main(){
    ll num;
    cin>>num;
    cout<<"The factors are: ";
    for(int i=1; i<=num; i++){
        if(num%i==0){
            cout<<i<<" ";
        }
    }      
    return 0;
}