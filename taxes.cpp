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
    int n;
    cin >> n;
    if (checkPrime(n)||n==1)
        cout << 1 << endl;
    else if (n % 2 == 0)
        cout << 2 << endl;
    else if (checkPrime(n - 2))
        cout << 2 << endl;
    else
        cout << 3 << endl;
    return 0;
}