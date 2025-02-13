#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    vector<int>factors;
    for (int i = 1; i < sqrt(x); i++)
    {
        /* code */
        if(x%i==0) factors.push_back(i);
        if(i != x/i) factors.push_back(x/i); 
    }
    for(auto it:factors){
        cout<<it<<" ";
    }
    return 0;
}