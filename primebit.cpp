#include <bits/stdc++.h>
using namespace std;
#define m1 1000000007
#define ll long long
#define vi vector<int>


int main()
{

    ll lower, upper, div = 0,j;
    cin >> lower >> upper;
    for(j=lower;j<=upper;j++){
        div=0;
        for (int i = 1; i <= j; i++)
        {
            
            if (j % i == 0)
            {
                div++;
            }
        }
        if (div == 2)
        {
            cout << j<<" is the prime number."<<endl;
        }        
    }
    return 0;
}