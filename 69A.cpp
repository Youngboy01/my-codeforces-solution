#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x[n];
    int y[n];
    int z[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> x[i];
        cin >> y[i];
        cin >> z[i];
    }
int sum1 = 0;
int sum2 = 0;
int sum3 = 0;
for (int i = 0; i < n; i++)
{
   sum1 += x[i];
   sum2 += y[i];
   sum3 += z[i];
}
   if(sum1==0&&sum2==0&&sum3==0) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;

    return 0;
}