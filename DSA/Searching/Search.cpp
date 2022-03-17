#include <iostream>
#include <stdio.h>
using namespace std;

int fun(int arr[], int n, int val)
{
    int low, high, mid;
    low = 0;
    high = n;
    // if (val == arr[0])
    // {
    //     return 0;
    // }

    // for (int i = 0; i < n; i++)
    // {
    // }

    for (int i = 0; i < n; i++)5
    {
        mid = (low + high) / 2;
        // cout<<mid<<"----";
        if (arr[mid] == val)
        {
            return mid;
        }
        if (arr[mid] > val)
        {
            high = mid - 1;
        }
        if (arr[mid] < val)
        {
            low = mid + 1;
        }
    }
} 

int main()
{
    int n, val;
    cin >> n;
    cin >> val;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << fun(arr, n, val);

    return 0;
}

