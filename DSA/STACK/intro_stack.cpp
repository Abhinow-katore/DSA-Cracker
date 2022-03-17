#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main(){
    stack<int>s;
    s.push(4);
    s.push(4);
    s.push(4);
    s.push(4);
    s.push(4);
    s.pop();
    cout<<s.top();
    
    return 0;
}