#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n>0){
        cout<<"No is positive"<<endl;
    }
    else if(n<0){
        cout<<"No is negative"<<endl;
    }
    else{
        cout<<"No is nether negative or postive"<<endl;
    }
    return 0;
}