#include<bits/stdc++.h>
using namespace std;

int main(){
    int d1,d2,d3;
    cin>>d1>>d2>>d3;
    int a,b,c,d;
    a = d1+d2+d3;
    b  = 2*(d1+d2);
    c = 2*(d2+d3);
    d = 2*(d1+d3);
    
    cout<<min({a,b,c,d})<<endl;
    return 0;
}