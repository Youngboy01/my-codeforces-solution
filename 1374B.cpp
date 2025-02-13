#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int cnt = 0;
    while(n!=1){
        if(n%6==0){
            n=n/6;
            cnt++;
        }
    }
}
    return 0;
}