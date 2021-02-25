//Program to check if a triangle is scalene, isosceles or equilateral.

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int side1, side2, side3;
    cin>>side1>>side2>>side3;
    if(side1==side2 && side2==side3)  cout<<"It is equilaterial triangle."<<"\n";
    else if(side1==side2 || side2==side3 || side3==side1) cout<<"It is isosceles triangle."<<"\n";
    else cout<<"It is scalene triangle."<<"\n";   
 
    
    return 0;
}