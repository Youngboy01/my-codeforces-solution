#include<bits/stdc++.h>
using namespace std;
bool jumps(int nums[],int n){

int reachable =0;
for (int i = 0; i < n; i++)
{
    if(reachable<i) return false;
    reachable=max(reachable,i+nums[i]);
}
return true;
}

int main(){
    int n=6;
    int arr[]={1,4,3,2,6,7};
    jumps(arr,n);
    
    return 0;
}