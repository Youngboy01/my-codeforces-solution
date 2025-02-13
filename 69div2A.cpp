#include <bits/stdc++.h>
using namespace std;

bool checkPrime(int n)
{

    int cnt = 0;

    for (int i = 1; i <= sqrt(n); i++)
    {

        if (n % i == 0)
        {
            cnt = cnt + 1;
            if (n / i != i)
            {
                cnt = cnt + 1;
            }
        }
    }

    if (cnt == 2)
        return true;
    else
        return false;
}

int main()
{
    int n, m;
    cin >> n >> m;

    if (checkPrime(m))
    {
        for (int i = n + 1; i < m; ++i)
        {
            if (checkPrime(i))
            {
                cout << "NO" << endl;
                return 0;
            }
        }
        cout << "YES" << endl;
        return 0;
    }
    else
        cout << "NO" << endl;
}