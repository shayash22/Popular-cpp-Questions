// Write a C++ Program to check wether a number is positive or negative

#include<iostream>
using namespace std;

int main()
{
    int no;
    cout<<"Enter the number:";
    cin>>no;
    if(no>0)
    {
        cout<<no<<" is positive.";
    }
    else if(no<0)
    {
        cout<<no<<" is negative.";
    }
    else
    {
        cout<<"0 is nether positve or negative.";
    }

}
