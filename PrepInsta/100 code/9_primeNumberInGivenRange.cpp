#include<iostream>
using namespace std;

int main(){
    int n1,n2;
    cin>>n1>>n2;
    for(int i=n1;i<=n2;i++){
        int div=0;
       for(int j=1;j<i;j++){
           if(i%j==0){
               div++;
           }
       }
       if(div==1){
           cout<<i<<endl;
       } 
    }
    return 0;
}