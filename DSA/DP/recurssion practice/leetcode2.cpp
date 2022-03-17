#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4};
    int k = 5;
    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (arr[i] * arr[j] % k == 0)
            {
                count++;
            }
        }
        // cout<<count;
    }
    
    cout << count << "\n";

    return 0;
}