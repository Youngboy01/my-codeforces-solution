#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        int diff = arr[1];

        for (int i = 2; i <= n; i++)
        {
            if (n == 1)
            {
                diff = arr[1];
            }
            else
            {
                diff = max(diff, arr[i] - arr[i - 1]);
            }
        }
        diff = max(diff, 2 * (k - arr[n]));
        cout << diff << endl;
    }
    return 0;
}