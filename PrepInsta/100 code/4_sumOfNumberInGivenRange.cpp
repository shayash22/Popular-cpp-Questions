#include<iostream>
using namespace std;

int main(){
    int n1,n2,total=0;
    cin>>n1>>n2;
    for(int i=n1;i<=n2;i++){
        total+=i;
    }
    cout<<total<<endl;
    return 0;
}