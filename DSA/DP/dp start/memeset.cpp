#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int dp[n+1];
    memset(dp, -1,sizeof dp);
    for (int i = 0; i < n; i++)
    {
        cout<<dp[i]<<" ";
    }
    
    
    return 0;
}