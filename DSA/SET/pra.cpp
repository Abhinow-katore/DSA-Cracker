#include<bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main(){
    set<int>s;
    s.insert(10);
    s.insert(10);
    s.insert(5);
    s.insert(6);
    ////////////
    auto x=s.find(10);
    if(x==s.end()) cout<<"NOT  FOUND"<<"\n";
    else{ cout<<"FOUND"<<"\n";}
    //////////////////
   // or//
    /*
    if(s.find(10)==s.end()) return Not found;
    else return found;

    */
    return 0;
}