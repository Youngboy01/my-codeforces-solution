#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (arr[i] == 1)
        {
            cout << -1 << endl;
            return 0;
        }

    }
    cout<<1<<endl;

    return 0;
}