#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int ansc= (arr[n-1]-arr[0])*(n-1);
        cout<<ansc<<endl;
}
    return 0;
}