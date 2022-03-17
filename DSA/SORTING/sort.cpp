#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);////ascending order
    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    sort(arr, arr + n, greater<int>());////descending order
    // for (int  i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    for(auto i:arr)
    cout<<i<<"\n";
    return 0;
}