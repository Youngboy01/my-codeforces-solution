#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j < n-i-1; j++)
        {
            /* code */
            cout<<" ";
        }
        cout<<endl;
        int x=0;
        int bral=(2*i+1)/2;
        for (int j = 0; j < 2*i+1; j++)
        {
            /* code */
            cout<<x;
            if(j<=bral) x++;
        else x--;
        }
    }
    
    return 0;
}