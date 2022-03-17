#include <iostream>
#include <stdio.h>
using namespace std;

int func(int n)
{
    if (n <= 1)
    {
        return n;
    }

    return func(n - 1) + func(n - 2);
}

int main()
{
    int n, i = 0;

    cin >> n;
    while (i < n)
    {
        cout << " " << func(i);
        i++;
    }
        return 0;
    
}