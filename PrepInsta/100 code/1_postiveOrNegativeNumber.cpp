#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n>0){
        cout<<"Number is positive"<<endl;
    }
    else if(n<0){
        cout<<"Number is negative"<<endl;
    }
    else{
        cout<<"Number is nether negative or postive"<<endl;
    }
    return 0;
}