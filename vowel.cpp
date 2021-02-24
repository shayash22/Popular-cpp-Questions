#include <bits/stdc++.h>
using namespace std;

 
int main(){
    char c;
    cin>>c;
    int Lowercase, Uppercase;
    Lowercase = (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    Uppercase = (c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if(Lowercase||Uppercase) cout<<c<<" is a vowel.\n";
    else cout<<c<<" is not a vowel.\n";

 
    
    return 0;
}