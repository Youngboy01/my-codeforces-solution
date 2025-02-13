#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s, t;
        cin >> s >> t;
        reverse(t.begin(), t.end());
        s += t;
        int cnt = 0;
        for (int i = 1; i < n + m; i++)
        {
            if (s[i - 1] == s[i])
            {
                cnt++;
            }
        }
        if (cnt <= 1)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}