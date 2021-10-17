#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n1,num,y,z,n2,total,count,rem;
    cin>>n1>>n2;
    for(int i=n1;i<=n2;i++){
        num=i;
        y=i;
        z=i;
        count=0;
        rem=0;
        total=0;
        while(y!=0){
            count++;
            y/=10;
        }
        
        while(z!=0){
            rem=z%10;
            total+=pow(rem,count);
            z/=10;
        }
        if(num==total){
            cout<<num<<endl;
        }
        

    }
    return 0;
}