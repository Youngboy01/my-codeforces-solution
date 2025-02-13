#include <bits/stdc++.h>
using namespace std;

int main()
{
    string month[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    string s;
    cin >> s;
    int k;
    cin >> k;
    for (int i = 0; i < 12; i++)
    {
        if (month[i] == s)
        {
            int g = (i + k) % 12;
            cout << month[g] << endl;
        }
    }

    return 0;
}