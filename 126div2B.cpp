#include <bits/stdc++.h>
using namespace std;

int main()
{

    float n;
    cin >> n;
    float sum = 0.0;
    for (int i = 0; i < n; ++i)
    {
        float p[i];

        cin >> p[i];
        sum += p[i];
    }
    float vlo = sum / (n);
    cout << vlo << endl;

    return 0;
}