#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int first, second, temp;
    first = 0, second = 1, temp = 0;
    int n;
    cin >> n;
    cout << first << '\t' << second << '\t';
    do
    {
        temp = first + second;
        cout << temp << '\t';
        first = second;
        second = temp;
        n--;
    } while (n != 1);
    return 0;
}