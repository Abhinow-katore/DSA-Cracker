#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main()
{
    int n = 8;
    int L[] = {4,6,8,10};
    int R[] = {2,8,11,20};
    int i = 0;
    int j = 0;
    int count = 0;
    for (int k = 0; k < n; k++){
        if (L[i] <= R[j] + 2){
            i = i + 1; }
        else{
            count = count + (n / 2) - i;
            j++; }}
    cout << count;
    return 0;
}
