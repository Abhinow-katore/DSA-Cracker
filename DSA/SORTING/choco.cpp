//incomplete 
#include <iostream>
#include <stdio.h>
using namespace std;

//void swap(int arr[], int arr[]) we cannot use this
//we will use pointer

void swap(int *xp, int *yp)
{
    int temp = 0;
    temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int sorted(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
    int y = 0;
    int diff = 0;
    int value = 0;
    int answer = 0;
    for (int i = 0; i < n; i++)
    {

        diff = arr[i + x - 1] - arr[i];
        cout << diff << "\n";
        if (value == 0)
        {
            value = diff;
            continue;
        }

        if (value > diff)
        {
            value = diff;
            answer = value;
            cout << "ans--" << answer<<"\n";
        }
        
    }
    cout << "---->" << answer<<"\n";
}

int main()
{
    int x;
    cin >> x;

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sorted(arr, n, x);

    return 0;
}