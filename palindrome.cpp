#include <bits/stdc++.h>
using namespace std;

bool palindrome(int n){
    int s = 0, b = n;
    while (n != 0){
        s = s * 10 + n % 10;
        n = n / 10;
    }
    return (s == b) ? 1 : 0;
}

int main(){
    int n;
    cin >> n;
    cout << palindrome(n);
    return 0;
}