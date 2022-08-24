#include <bits/stdc++.h>
using namespace std;
int palindrome(int n)
{
    int s = 0;
    int b = n;
    for (int i = 0; i < n; i++)
    {
        int a = n % 10;
        s = s * 10 + a;
        n = n / 10;
        if (n == 0)
        {
            if (s == b)
            {
                return 1;
            }
        }
        if (s != b)
        {
            return 0;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    palindrome(n);
    return 0;
}