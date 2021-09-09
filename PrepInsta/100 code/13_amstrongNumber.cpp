#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,num,rem,total=0,count=0;
    cin>>n;
    num=n;
    int y=n;
    // Number of element 
    while(n!=0){
        count++;
        n/=10;
    }
    
    while (y!=0)
    {
        rem=y%10;
        total+=pow(rem,count);
        y/=10;
    }
    if(num==total){
        cout<<"Number is amstrong number.";

    }
    else{
        cout<<"Number is not amstrong number.";
    }

    return 0;
}