#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
void recur(int src, int &des){
    
    if (src==des)
    {
        cout<<"pahuch gaya"<<"\n";
        return ;
    }
    cout<<src<<"\n";
    return recur(src+1, des);


}

int main(){
    int src = 1;
    int n= 10;
    
    recur(src,n);

    
    return 0;
}