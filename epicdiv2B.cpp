#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        long long value = 0;
        int m = 0;
        for (int i = 1; i < n; i++)
        {
            if (v[i] < v[i - 1])
            {
                value += (v[i - 1] - v[i]);
                m = max(m, (v[i - 1] - v[i]));
                v[i] = v[i - 1];
            }
        }
    }
    return 0;
}