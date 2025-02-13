#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
     vector<int>a(n);
        for (int i = 0; i <n; i++)
        {
            cin>>a[i];
        }
        int b=0;
        for (int i = 0; i <n-1 ; i++)
        {
            b =max(b,a[i]);
        }
        cout<<(a[n-1]+b)<<endl;
}
    return 0;
}