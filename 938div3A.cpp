#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int cost1 = n * a;
        int cost2;
        if (n % 2 == 0)
        {
            cost2 = (n / 2) * b;
        }
        else
        {
            cost2 = ((n - 1) / 2) * b + a;
        }
        printf("%d\n", cost1 < cost2 ? cost1 : cost2);
    }

    return 0;
}
