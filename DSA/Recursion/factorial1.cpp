#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int fac(int x){
    if (x==1)
    {
        return 1;
    }
    
    return x * fac(x-1);
}
int main(){
    int n;
    cin>>n;
    cout<<fac(n);
    return 0;
}