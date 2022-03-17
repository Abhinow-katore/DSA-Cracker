#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
bool search(int *arr, int n, int val){
    if(n==0){
        return false;
    }
    if (arr[0]==val){
        return true;
    }

     search(arr+1, n-1,val);

}

int main(){
    int n = 5;
    int arr[n] = {1,2,3,4,5};
    int val;
    cin>>val;
    bool ans = search(arr, n, val);
    if (ans)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
    
    return 0;
}