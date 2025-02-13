#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
      //  if(n%2020>=495||n<2020)cout<<"no"<<endl;
       // else cout<<"yes"<<endl;
       int b = n%2020;
       int a = (n-b)/2020 - b;
       if(a*2020 + b*2021==n&& n >=2020&& a>=0) cout<<"yes"<<endl;
       else cout<<"no"<<endl;
}
    return 0;
}