#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x1,y1,x2,y2;
        cin>>x1>>y1;
        cin>>x2>>y2;
        if(x1==x2 && y1==y2) cout<<"yes"<<endl;
         else if((x2>=y2 && x1<=y1)||(x2<=y2 && x1>=y1)) cout<<"NO"<<endl;
        else cout<<"yes"<<endl;

}
    return 0;
}