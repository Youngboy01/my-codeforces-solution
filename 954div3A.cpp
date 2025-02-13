#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x1,x2,x3,target;
        cin>>x1>>x2>>x3;
        int coordinates[] = {x1,x2,x3};
        sort(coordinates,coordinates+3);
        
       target= coordinates[1];
         int distance = 0;
        for (int i = 0; i < 3; i++)
        {
            distance += abs(coordinates[i]-target);
        }
        cout<<distance<<endl;

    }
    return 0;
}