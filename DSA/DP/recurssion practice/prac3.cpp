#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int sumOf(int *arr, int n){
    if (n==0)
    {
        return 0;
    }
    if (n==1)
    {
        arr[0];
    }
    // int remaining = ;
    int sum = arr[0] + sumOf(arr+1, n-1);
    return sum;    

}

int main(){
    int n = 5;
    int arr[n] = {1,2,3,4,5};
    cout<<sumOf(arr, n);
    return 0;
}