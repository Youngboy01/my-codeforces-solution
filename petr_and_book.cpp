#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[7];
    for (int i = 0; i < 7; i++)
    {
        /* code */
        cin >> arr[i];
    }
    int i = 0;
    do
    {
        n -= arr[i];
        if(n>0){
        i++;
        i%=7;}
    } while (n > 0);

    cout << i+1 << endl;

    return 0;
}