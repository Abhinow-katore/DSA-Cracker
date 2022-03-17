#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main(){
    int n ;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i];
    }
    int k ;
    cin>>k;
    int arr1[k];
    for (int i = 0; i < k; i++)
    {
        arr1[i] = arr[i];
    }
    int arr2[n-k];
    for (int i = 0; i < n-k; i++)
    {
        arr2[i] = arr[i+k];
    }
    sort(arr1,arr1 +k);
    sort(arr2, arr2+  n-k, greater<int>());
    for (int i = 0; i < k; i++)
    {
        cout<<arr1[i];
    }
    
    
    return 0;
}