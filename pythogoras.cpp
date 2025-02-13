#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,m,k;
    cin>>n;
    if(n==1 || n==2){cout<<-1<<endl;}
    else if(n%2!=0){
        k = (n*n+1)/2;
        m = (n*n-1)/2;
        cout<<m<<" "<<k<<endl;
    }
    else{
        k = (n*n+4)/4;
        m = (n*n-4)/4;
        cout<<m<<" "<<k<<endl;
    }
    
    return 0;
}