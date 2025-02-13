#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b;
    cin>>n>>a>>b;
    int cnt=0;
    for (int i = 1; i <=n; i++)
    {
        /* code */
        if(n-i>=a && i-1<=b) cnt++;
    }
    cout<<cnt;
    return 0;
}