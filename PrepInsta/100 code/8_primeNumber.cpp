#include<iostream>
using namespace std;

int main(){
    int n,div;
    cin>>n;
    for( int i=1;i<n;i++){
        if(n%i==0){
            div++;
        }
    }
    if(div==1){
        cout<<"It is a prime number."<<endl;
    }
    else{
        cout<<"It is not a prime number."<<endl;
    }
    
    return 0;
}