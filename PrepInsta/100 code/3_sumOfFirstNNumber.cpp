#include<iostream>
using namespace std;

int main(){
    int n,total=0;
    cin>>n;
    while(n!=0){
        total+=n;
        n--;
    }
    cout<<total;
    return 0;
}