#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main(){
    map<int, string> m;
    m[1] = "abs";
    m[3] = "abhi";
    m[6] = "a";
    auto it = m.find(3);
    if (it==m.end())
    {
        cout<<"NO value"<<"\n";
    }
    else{
        cout<<(*it).first<<" "<<(*it).second;
    }

    
    return 0;
}
