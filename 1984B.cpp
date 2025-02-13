#include <bits/stdc++.h>
using namespace std;

long long countDigits(long long n)
{
    long long cnt = (long long)(log10(n) + 1);
    return cnt;
}

int main()
{

    long long t;
    cin >> t;
    while (t--)
    {

        long long n;
        cin >> n;
        long long x =( countDigits(n) - 1);
        long long y = pow(10, x);
        if (n >= y && n <= ((2 * y) - 2))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}