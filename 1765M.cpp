#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       int lcm,minLcm;
        if(n%2==0){
            cout<<n/2<<" "<<n/2<<endl;
        }
        else{
        lcm=1;
        for(int i=2;i<=sqrt(n);i++){
        //  lcm = (i*n-i)/(__gcd(i,n-i));
        // lcm = min(lcm,n); 
         if(n%i==0){
         lcm = n/i; 
         break;
         }
        }
        cout<<lcm<<" "<<n-lcm<<endl;
        }
}
    return 0;
}