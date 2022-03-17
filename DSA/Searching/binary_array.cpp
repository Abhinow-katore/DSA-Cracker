#include <iostream>
#include <stdio.h>
using namespace std;

int fun(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            return n - i;
        }
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;
    // cin >> val;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << fun(arr, n);

    return 0;
}