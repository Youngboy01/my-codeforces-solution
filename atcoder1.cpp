#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;
    int cnt=0;
    
    vector<string>s(N);
    for (int i = 0; i <N; i++)
    {
        
        
cin>>s[i];
        
    }
    for(const string& c:s){
        if(c=="Takahashi") cnt+=1;
    }
    cout<<cnt<<endl;
    return 0;
}