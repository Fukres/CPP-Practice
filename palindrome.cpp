#include <bits/stdc++.h>
using namespace std;

bool palindrome(int n)
{
    int s = 0, b = n;
    while (n != 0)
    {
        int a = n % 10;
        s = s * 10 + a;
        n = n / 10;
    }
    if (s == b)
    {
        return 1;
    }
    else
    {

        return 0;
    }
}

int main()
{
    int n;
    cin >> n;
    cout << palindrome(n);
    return 0;
}