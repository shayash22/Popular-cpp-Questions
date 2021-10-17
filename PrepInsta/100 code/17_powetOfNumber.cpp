#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, power, total = 1;
    cin >> num >> power;
    for (int i = 0; i < power; i++)
    {
        total *= num;
    }
    cout << total;
    return 0;
}
