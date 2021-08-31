#include<iostream>
using namespace std;

int main(){
    int n,rem,total=0;
    cin>>n;
    while(n!=0){
        rem=n%10;
        total+=rem;
        n/=10;
    }
    cout<<total<<endl;
    return 0;
}